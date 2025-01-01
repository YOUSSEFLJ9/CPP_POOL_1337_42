/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:18 by ymomen            #+#    #+#             */
/*   Updated: 2025/01/01 10:10:45 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    odd = -1;
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
        {
            v.push_back(n);
            d.push_back(n);
        }
    }
}

void PmergeMe::print_v()
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::print_d()
{
    for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}


void PmergeMe::fill_main_pending_v(std::vector<std::pair<int ,int> > &pairs, std::vector<int>& mainchain,std::vector<int>& pendingchain)
{
    int frst = 1;
    for(std::vector<std::pair<int,int> >::iterator itr = pairs.begin(); itr != pairs.end(); itr++)
    {
        if(frst == 1)
        {
            frst = 0;
            mainchain.push_back(itr->second);
            mainchain.push_back(itr->first);
            continue;
        }
        mainchain.push_back(itr->first);
        pendingchain.push_back(itr->second);
    }            
}
void PmergeMe::insert_pendingelements_v( std::vector<int>&mainchain,  std::vector<int>&pendingchain)
{
    for(std::vector<int>::iterator pendingchain_it = pendingchain.begin(); pendingchain_it != pendingchain.end(); pendingchain_it++)
    {
        std::vector<int>::iterator mainchain_it = std::upper_bound(mainchain.begin(), mainchain.end(), *pendingchain_it);
        mainchain.insert(mainchain_it, *pendingchain_it);
    }
    v.clear();
    std::vector<int>::iterator mainchain_it = mainchain.begin();
    while (mainchain_it != mainchain.end())
    {
        v.push_back(*mainchain_it);
        mainchain_it++;
    }
    if(odd != -1)
    {
        v.insert(std::upper_bound(v.begin(), v.end(), odd), odd);   
    }
}
void PmergeMe::fordJohnsonSort_v()
{

    size_t size = v.size();
    std::vector<std::pair<int, int> >pairs;
    std::vector<int>mainchain;
    std::vector<int>pendingchain;
    
    odd = -1;
    if (size % 2 != 0)
    {
        odd = *(--(v.end()));
        v.pop_back();
    }
    
    for (size_t i = 0; i + 1 < v.size(); i+= 2)
    {
        if (v[i] > v[i + 1])
        {
            pairs.insert(pairs.end(), std::make_pair(v[i], v[i + 1]));
        }
        else
        {
            pairs.insert(pairs.end(), std::make_pair(v[i + 1], v[i]));
        }       
    }
    pairs = recursiveBiggersort_v(pairs);
    fill_main_pending_v(pairs, mainchain, pendingchain);
    insert_pendingelements_v(mainchain, pendingchain);
    mainchain.clear();
    pairs.clear();
    pendingchain.clear();
}

std::vector<std::pair<int ,int> > PmergeMe::recursiveBiggersort_v(std::vector<std::pair<int ,int> > pairs )
{
    //base case
    if (pairs.size() <= 1)
        return pairs;
    size_t mid = pairs.size() / 2;
    std::vector<std::pair<int ,int> > left(pairs.begin(), pairs.begin() + mid);
    std::vector<std::pair<int ,int> > right(pairs.begin() + mid, pairs.end());

   left =  recursiveBiggersort_v(left);
   right =  recursiveBiggersort_v(right);
   
   std::vector<std::pair<int ,int> >merge;
   size_t i = 0;size_t j = 0;
    while (i < left.size() && j <right.size())
    {
        if (left[i].first < right[j].first)
            merge.push_back(left[i++]);
        else
            merge.push_back(right[j++]);
    }
    while(i < left.size())
            merge.push_back(left[i++]);
    while(j < right.size())
        merge.push_back(right[j++]);
    left.clear();
    right.clear();
    return merge;
}

//deque:
void PmergeMe::fill_main_pending_d(std::deque<std::pair<int ,int> > &pairs, std::deque<int>& mainchain,std::deque<int>& pendingchain)
{
    int frst = 1;
    for(std::deque<std::pair<int,int> >::iterator itr = pairs.begin(); itr != pairs.end(); itr++)
    {
        if(frst == 1)
        {
            frst = 0;
            mainchain.push_back(itr->second);
            mainchain.push_back(itr->first);
            continue;
        }
        mainchain.push_back(itr->first);
        pendingchain.push_back(itr->second);
    }            
}
void PmergeMe::insert_pendingelements_d( std::deque<int>&mainchain,  std::deque<int>&pendingchain)
{
    for(std::deque<int>::iterator pendingchain_it = pendingchain.begin(); pendingchain_it != pendingchain.end(); pendingchain_it++)
    {
        std::deque<int>::iterator mainchain_it = std::upper_bound(mainchain.begin(), mainchain.end(), *pendingchain_it);
        mainchain.insert(mainchain_it, *pendingchain_it);
    }
    d.clear();
    std::deque<int>::iterator mainchain_it = mainchain.begin();
    while (mainchain_it != mainchain.end())
    {
        d.push_back(*mainchain_it);
        mainchain_it++;
    }
    if(odd != -1)
    {
        d.insert(std::upper_bound(d.begin(), d.end(), odd), odd);   
    }
}
void PmergeMe::fordJohnsonSort_d()
{

    size_t size = d.size();
    std::deque<std::pair<int, int> >pairs;
    std::deque<int>mainchain;
    std::deque<int>pendingchain;
    
    odd = -1;
    if (size % 2 != 0)
    {
        odd = *(--(d.end()));
        d.pop_back();
    }
    
    for (size_t i = 0; i + 1 < d.size(); i+= 2)
    {
        if (d[i] > d[i + 1])
        {
            pairs.insert(pairs.end(), std::make_pair(d[i], d[i + 1]));
        }
        else
        {
            pairs.insert(pairs.end(), std::make_pair(d[i + 1], d[i]));
        }       
    }
    pairs = recursiveBiggersort_d(pairs);
    fill_main_pending_d(pairs, mainchain, pendingchain);
    insert_pendingelements_d(mainchain, pendingchain);
    mainchain.clear();
    pairs.clear();
    pendingchain.clear();
}

std::deque<std::pair<int ,int> > PmergeMe::recursiveBiggersort_d(std::deque<std::pair<int ,int> > pairs )
{
    //base case
    if (pairs.size() <= 1)
        return pairs;
    size_t mid = pairs.size() / 2;
    std::deque<std::pair<int ,int> > left(pairs.begin(), pairs.begin() + mid);
    std::deque<std::pair<int ,int> > right(pairs.begin() + mid, pairs.end());

   left =  recursiveBiggersort_d(left);
   right =  recursiveBiggersort_d(right);
   
   std::deque<std::pair<int ,int> >merge;
   size_t i = 0;size_t j = 0;
    while (i < left.size() && j <right.size())
    {
        if (left[i].first < right[j].first)
            merge.push_back(left[i++]);
        else
            merge.push_back(right[j++]);
    }
    while(i < left.size())
            merge.push_back(left[i++]);
    while(j < right.size())
        merge.push_back(right[j++]);
    left.clear();
    right.clear();
    return merge;
}

size_t PmergeMe::size_deque()
{
    return d.size();
}
size_t PmergeMe::size_vector()
{
    return v.size();
}