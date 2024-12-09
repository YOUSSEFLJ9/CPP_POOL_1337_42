/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:41:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/09 12:57:56 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <vector>

template <class T>
class MutantStack: public std::stack<T>
{
    private:
    
    public:
    MutantStack();
    MutantStack(const MutantStack &other);
    MutantStack &operator=(const MutantStack &other);
    ~MutantStack();
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    iterator begin();
    iterator end();
    const_iterator cbegin();
    const_iterator cend();
    
};

#include "MutantStack.tpp"