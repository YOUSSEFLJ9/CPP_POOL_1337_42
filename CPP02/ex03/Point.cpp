/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:16:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/09 15:23:15 by ymomen           ###   ########.fr       */
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
    return *this;
}

float Point::getX() const
{
    return x.toFloat();
}

float Point::getY() const
{
    return y.toFloat();
}