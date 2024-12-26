/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:22 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/25 17:45:15 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <deque>
#include <sstream>
#include <algorithm>


class PmergeMe
{
    private:
        std::vector<int> v;
        std::deque<int> d;
        bool str_valid(std::string &s);
        int count_elements(std::string s);
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();

        void ParseArgs(std::string s);
        void print_v();
        void print_d();
};

