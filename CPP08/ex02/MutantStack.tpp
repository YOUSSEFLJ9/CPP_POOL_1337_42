/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:22:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/09 15:18:05 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
    
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other)
{
    
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    
}
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
    {
        this->c = other.c;
    }
    return *this;
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin()
{
    return this->c.cbegin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend()
{
    return this->c.cend();
}