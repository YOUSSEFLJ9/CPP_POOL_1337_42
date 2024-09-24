/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:06:29 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 07:58:17 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include <iostream>
int main() {
    Point A;
    Point B, C, P;

    A = Point(Fixed(0), Fixed(0));
    B = Point(Fixed(5), Fixed(0));
    C = Point(Fixed(0), Fixed(5));
    P = Point(Fixed(2), Fixed(2));

    if (bsp(A, B, C, P)) {
        std::cout << "Point P is inside the triangle ABC." << std::endl;
    } else {
        std::cout << "Point P is outside the triangle ABC." << std::endl;
    }

    return 0;
}