/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:17:07 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/09 13:17:39 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

void BitcoinExchange::readFile(const std::string &file)
{
    std::ifstream fs(file);
    if (!fs.is_open())
        throw std::runtime_error("File not found");

    std::string line;
    
}