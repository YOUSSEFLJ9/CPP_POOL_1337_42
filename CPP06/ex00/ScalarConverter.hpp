/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:01:38 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/26 14:59:54 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    
};