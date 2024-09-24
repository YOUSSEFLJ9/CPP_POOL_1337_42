/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:16:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 07:50:56 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y)
{
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
}

Point::~Point()
{
}
Point &Point::operator=(const Point &point)
{
    x = point.x;
    y = point.y;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}