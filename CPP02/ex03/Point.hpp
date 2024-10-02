/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:14:19 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 21:00:49 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
public:
    Point();
    Point(const Fixed &x, const Fixed &y);
    Point(const Point &point);
    ~Point();
    Point &operator=(const Point &point);
    float getX() const;
    float getY() const;
    
private:
    Fixed x;
    Fixed y;
    
};

bool bsp(Point const a, Point const b, Point const c, Point const point);