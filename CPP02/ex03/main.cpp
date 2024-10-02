/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:06:29 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 22:34:09 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include <iostream>
int main() {
    Point A;
    Point B, C, P;
    A = Point (Fixed(0), Fixed(3.71f));
	B = Point(Fixed(0), Fixed(1.15f));
	Point	c(Fixed(-0.28f), Fixed(2.91f));
	Point	p(Fixed(0), Fixed(3.06f));
    
    if (bsp(A, B, c, p)) {
        std::cout << "Point P is inside the triangle ABC." << std::endl;
    } else {
        std::cout << "Point P is outside the triangle ABC." << std::endl;
    }

    return 0;
}