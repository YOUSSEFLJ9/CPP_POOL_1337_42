/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:01:38 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/27 14:55:06 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
    public:
    static void convert(const std::string&);
    ScalarConverter &operator=(const ScalarConverter& other);
    ~ScalarConverter();

    private:
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter();
    
    static int Get_Type(const std::string &in);
    static void custom_cases(const std::string &in);
    //function_helpers
    static void print_char(const std::string &in);
    static void print_int(const std::string &in);
    static void print_double(const std::string &in);
    static void print_float(const std::string &in);
    
};
#endif // SCALARCONVERTER_HPP