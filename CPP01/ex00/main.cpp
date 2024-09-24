/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:11:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/17 17:21:44 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
    Zombie *zombie1 = newZombie("Zombie1");
    zombie1->announce();
    randomChump("Zombie2");
    delete zombie1;
    return (0);
}