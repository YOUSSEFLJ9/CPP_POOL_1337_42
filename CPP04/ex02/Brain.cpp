/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:24:21 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 18:48:04 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[41mBrain default constructor called\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "idea";
}

Brain::Brain(const Brain &b)
{
    std::cout << "\033[41mBrain copy constructor called\033[0m" << std::endl;
    *this = b;
}

Brain::~Brain()
{
    std::cout << "\033[41mBrain destructor called\033[0m" << std::endl;
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "\033[41mBrain assignation operator called\033[0m" << std::endl;
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
    }
    return *this;
}

void Brain::setIdeas(std::string ideas[100])
{
    for (int i = 0; i < 3; i++)
        this->ideas[i] = ideas[i];
}

std::string *Brain::getIdeas()const
{
    return (std::string *)ideas;
}