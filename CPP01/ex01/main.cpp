/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:30:07 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/10 23:06:40 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "ZOOOMBIE");
    if (horde == NULL)
    {
        std::cout << "Error: invalid number of zombies" << std::endl;
        return (1);
    }

    for (int i = 0; i < 5; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}