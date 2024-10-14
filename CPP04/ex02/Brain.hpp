/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:10:59 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 16:38:34 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
public:
    Brain();
    ~Brain();
    Brain(const Brain &b);
    Brain &operator=(const Brain &b);
    void setIdeas(std::string ideas[100]);
    std::string *getIdeas()const;
private:
    std::string ideas[100];
};