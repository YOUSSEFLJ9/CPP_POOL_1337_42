/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:26:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 07:57:32 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed TriabgleArea(Point const a, Point const b, Point const c)
{
    return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()))) / 2;
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed total_area = TriabgleArea(a, b, c);
    Fixed area1 = TriabgleArea(a, b, point);
    Fixed area2 = TriabgleArea(a, c, point);
    Fixed area3 = TriabgleArea(b, c, point);




    return total_area == area1 + area2 + area3;  
}