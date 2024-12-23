/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:17:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/23 14:49:44 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <iomanip>

class BitcoinExchange
{
    private:
        std::map<std::string, float>exchange_db;
        std::ifstream infile;
        std::ifstream db_file;
        std::string _date;
        float _rate;
        void pars_infile();
        bool parseline(std::string line);
        void store_db();
        bool check_date();
        void searchfordata(std::string, float);
        
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);

        void readFile(const std::string &file);
        // void displayData() const;
};
