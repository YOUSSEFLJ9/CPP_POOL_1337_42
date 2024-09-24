/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_Replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:07:06 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/17 17:32:45 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

std::string ft_replace(size_t pos, size_t len, std::string replace, std::string line)
{
    std::string linereplaced = line.substr(0, pos);
    linereplaced += replace;
    linereplaced += line.substr(len + pos);
    return (linereplaced);
}