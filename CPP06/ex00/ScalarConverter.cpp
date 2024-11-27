/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:50:53 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/27 15:28:09 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    static_cast<void> (other);
    return *this;
}



void ScalarConverter::convert(const std::string& in)
{
    int type = Get_Type(in);
    
    switch (type)
    {
    case 1:
        std::cout << "char: impossible"<<std::endl;
        std::cout << "int: impossible"<<std::endl;
        std::cout << "float: "<< in << "f"<<std::endl;
        std::cout << "double: "<<in<<std::endl;
        break;
    case 2:
        std::cout << "char: impossible"<<std::endl;
        std::cout << "int: impossible"<<std::endl;
        std::cout << "float: "<< in <<std::endl;
        std::cout << "double: "<<in.substr(0, in.length() - 1)<<std::endl;
        break;
    case 3:
        std::cout << "char: impossible"<<std::endl;
        std::cout << "int: impossible"<<std::endl;
        std::cout << "float: impossible" <<std::endl;
        std::cout << "double: impossible"<<std::endl;
        break;
    default:
            custom_cases(in);
        break;
    }
}

void ScalarConverter::custom_cases(const std::string &in)
{
    print_char(in);
    print_int(in);
    print_float(in);
    print_double(in);
}

void ScalarConverter::print_float(const std::string & in)
{
    try{
        float floating = 0;
        if (in.length() == 1 && isalpha(in[0]))
            floating = static_cast<float>(in[0]);
        else
        {
            std::string s;
            s = in;
            if(in[in.length() - 1] == 'f')
                s = in.substr(0, in.length() - 1);
            std::stringstream strem(s);
            strem >> floating;
            if (strem.fail() || !strem.eof())
                throw "impossible";
        }
        std::cout << std::fixed<<std::setprecision(1);
        std::cout << "float : " << floating << "f" << std::endl;
    }
    catch(const char *e)
    {
        std::cout << "float : "<< e << std::endl;
    }
}

void ScalarConverter:: print_char(const std::string & in)
{
    try{
        int c = 0 ;
        if (in.length() == 1 && isalpha(in[0]))
            c = static_cast<int>(in[0]);
        else
        {
            std::string s;
            s = in;
            float f = 0;
            if(in[in.length() - 1] == 'f')
                s = in.substr(0, in.length() - 1);
            std::stringstream strem(s);
            strem >> f;
            if (strem.fail() || !strem.eof())
                throw "impossible";
            c = static_cast<int>(f);
            if (c < -128 || c > 127)
                throw "impossible";
            if (!isprint(c) )
            {
                std::cout << "char : Non displayable" << std::endl;
                    return;
            }
        }
        std::cout << "char : '" << static_cast<char>(c) <<"'" <<std::endl;
    }
    catch(const char *e)
    {
        std::cout << "char : "<< e << std::endl;
    }
}

void ScalarConverter:: print_int(const std::string & in)
{
    try{
        int integer = 0 ;
        if (in.length() == 1 && isalpha(in[0]))
            integer = static_cast<int>(in[0]);
        else
        {
            std::stringstream ss(in);
            ss >> integer;
            if (ss.fail())
                throw "impossible";
        }
        std::cout << "int : " << integer << std::endl;
    }
    catch(const char *e)
    {
        std::cout << "int : "<<e << std::endl;
    }
}

void ScalarConverter:: print_double(const std::string & in)
{
    try{
        double d = 0.0;
        if (in.length() == 1 && isalpha(in[0]))
            d = static_cast<double>(in[0]);
        else
        {
             std::string s;
            s = in;
            if(in[in.length() - 1] == 'f')
                s = in.substr(0, in.length() - 1);
            std::stringstream strem(s);
            strem >> d;
            if (strem.fail() || !strem.eof())
                throw "impossible";
        }
        std::cout << std::fixed<<std::setprecision(1);
        std::cout << "double : " << d<< std::endl;
    }
    catch(const char *e)
    {
        std::cout << "double : "<< e << std::endl;
    }
}

int ScalarConverter::Get_Type(const std::string&in)
{
    if (!in.compare("nan") || !in.compare("-inf") || !in.compare("+inf"))
        return 1;
    else if (!in.compare("+inff") || !in.compare("-inff") || !in.compare("nanf"))
        return 2;
    int i = 0;
    if (in.size() == 1 && isalpha(in[0]) && !isdigit(in[0]))
        return 20;
    while(in[i])
    {
        if (in[i] != '.' && in[i] != 'f'  && !isdigit(in[i]) && in[i] != '-' )
            return 3;
        i++;
    }
    return 0;
}
