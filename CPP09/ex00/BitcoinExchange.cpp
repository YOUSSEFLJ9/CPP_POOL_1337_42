/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:17:07 by ymomen            #+#    #+#             */
/*   Updated: 2025/01/01 10:13:18 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    // std::cout << "constructer called\n";
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    std::cout << "copy constructer called\n";
    *this = other;
}
BitcoinExchange::~BitcoinExchange()
{
    if (infile.is_open())
        infile.close();
    if (db_file.is_open())
        db_file.close();
    // std::cout << "destructer called\n";
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << "copy assingment called\n";
    if (this != &other)
    {
        this->exchange_db = other.exchange_db;
    }
    return *this;
}



void BitcoinExchange::readFile(const std::string &file)
{
    if (file.size() < 4 || file.substr(file.size() - 4) != ".csv")
        throw   std::invalid_argument("bad file extension");
    infile.open(file.c_str());
    if (!infile.is_open())
        throw std::runtime_error("File not found");
    db_file.open("data.csv");
    if (! db_file.is_open())
    {
        infile.close();
        throw std::runtime_error("couldn't find the data base 'data.csv'");
    }   
    store_db();
    pars_infile();
}

std::string trim(const std::string& str) 
{
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return "";
    }
    size_t end = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(start, end - start + 1);
}
void BitcoinExchange::store_db()
{
    bool first_bq = true;
    std::string line;
    while(std::getline(db_file, line))
    {
        if (first_bq == true)
        {
           first_bq = 0;
           if (line == "date,exchange_rate")
                continue;
            else
                throw std::invalid_argument("invalid data input");     
        }
        std::stringstream cvs(line);
        std::string rate;
        if (std::getline(cvs, _date, ',') && std::getline(cvs, rate))
        {
            rate = trim(rate);
            std::stringstream s(rate);
            s >> _rate;
            if (s.fail() || !s.eof())
            {
                infile.close();
                db_file.close();
                throw std::invalid_argument("rate error");
            }
            _date = trim(_date);
            exchange_db[_date] = _rate;
        }
        else
        {
            infile.close();
            db_file.close();
            throw std::runtime_error("Error malformed line : " + line);
        }
    }
    db_file.close();
}
bool BitcoinExchange:: check_date()
{
    if (_date.size() != 10 || _date[4] != '-' || _date[7] != '-')
        return false;
    std::stringstream year(_date.substr(0, 4));
    std::stringstream month(_date.substr(5, 2));
    std::stringstream day(_date.substr(8, 2));
    int y, m , d;
    year >> y;
    month >> m;
    day >> d;
    if (!year.eof() || !month.eof() || !day.eof() || day.fail() || year.fail() || month.fail())
        return 0;
    if (y <= 0 || m > 12 || m < 1 || d < 1)
        return 0;
    if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
    {
        if (d > 29)
             return 0;      
    }
    else
    {
        int monthsdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (monthsdays[m - 1] < d)
            return 0;
    }
    return 1;
}
void BitcoinExchange::searchfordata(std::string date, float rate)
{
    std::map<std::string, float>::iterator it = exchange_db.lower_bound(date);
    if (it != exchange_db.end() && it->first == date)
        std::cout << date << " => " << rate << " = " << rate * it->second<< std::endl;
    else
    {
        if (it != exchange_db.begin())
        {
            it--;
            std::cout << date << " => " << rate << " = " << rate * it->second<< std::endl;
        }
        else
            throw std::invalid_argument("Error : no data found before this date " + exchange_db.begin()->first);
    }
}

void BitcoinExchange::pars_infile()
{
    bool first = true;
    std::string line;
    while(std::getline(infile, line))
    {
        if (first == true)
        {
            first = 0;
            if (line == "date | value")
                continue;
            else
                throw std::invalid_argument("invalid data input");
        }
        std::stringstream cvs(line);
        std::string rate;
        if (cvs.fail() || !cvs.eof())
            std::runtime_error("internal error!");
        try
        {
            if (std::getline(cvs, _date, '|') && std::getline(cvs, rate))
            {
                rate = trim(rate);
                _date = trim(_date);
                std::stringstream s(rate);
                s >> _rate;
                if (!check_date() || !s.eof() || s.fail())
                        throw std::invalid_argument( "Error: bad input => " + line);
                else if (_rate < 0)
                        throw std::invalid_argument( "Error: not a positive number.");
                else if (_rate > 1000)
                        throw std::invalid_argument( "Error: too large a number.");
                
            }
            else
            {
                throw std::invalid_argument("Error: bad input => " + line);
            }
               searchfordata(_date, _rate);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}