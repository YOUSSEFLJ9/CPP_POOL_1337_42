/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:22 by ymomen            #+#    #+#             */
/*   Updated: 2025/01/01 10:04:20 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <deque>
#include <sstream>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
private:
    std::vector<int> v;
    std::deque<int> d;
    int     odd;
    bool str_valid(std::string &s);
    int count_elements(std::string s);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

    void ParseArgs(std::string s);
    
    void print_d();
    std::deque<std::pair<int ,int> > recursiveBiggersort_d(std::deque<std::pair<int ,int> > bigger);
    void fill_main_pending_d(std::deque<std::pair<int ,int> > &pairs, std::deque<int>& mainchain,std::deque<int>& pendingchain);
    void insert_pendingelements_d( std::deque<int>&mainchain,  std::deque<int>&pendingchain);
    void fordJohnsonSort_d();
    size_t  size_deque();

    
    
    void print_v();
    void fordJohnsonSort_v();
    std::vector<std::pair<int ,int> > recursiveBiggersort_v(std::vector<std::pair<int ,int> > bigger);
    void fill_main_pending_v(std::vector<std::pair<int ,int> > &pairs, std::vector<int>& mainchain,std::vector<int>& pendingchain);
    void insert_pendingelements_v( std::vector<int>&mainchain,  std::vector<int>&pendingchain);
    size_t  size_vector();
};
