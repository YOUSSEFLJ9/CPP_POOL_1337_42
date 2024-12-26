/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/25 17:45:56 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this == &other)
        return *this;
    v = other.v;
    d = other.d;
    return *this;
}

PmergeMe::~PmergeMe()
{
}
bool PmergeMe::str_valid(std::string &s)
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]) && s[i] != ' ')
            return false;
    }
    return true;
}
int PmergeMe::count_elements(std::string s)
{
    int i = 0;
    int count = 0;
    while (s[i])
    {
        if (s[i] == ' ')
            i++;
        else
        {
            count++;
            while (s[i] && s[i] != ' ')
                i++;
        }
    }
    return count;
}
void PmergeMe::ParseArgs(std::string s)
{
    if (!str_valid(s))
        throw std::invalid_argument("Invalid argument");
   
    std::stringstream ss(s);
    int n;
    int c = count_elements(s);
    for (int i = 0; i < c; i++)
    {
        ss >> n;
        if (ss.fail() || ss.bad())
            throw std::invalid_argument("Invalid argument");
        if (std::find(v.begin(), v.end(), n) != v.end())
            throw std::invalid_argument("Duplicate argument");
        else
        v.push_back(n);
    }
}

void PmergeMe::print_v()
{
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::print_d()
{
    for(std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}