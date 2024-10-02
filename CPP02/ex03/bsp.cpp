/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:26:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 21:03:44 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float TriabgleArea(Point const a, Point const b, Point const c)
{
    return abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()))) / 2;
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float total_area = TriabgleArea(a, b, c);
    float area1 = TriabgleArea(a, b, point);
    float area2 = TriabgleArea(a, c, point);
    float area3 = TriabgleArea(b, c, point);

    if (total_area == 0 || area1 == 0 || area2 == 0 || area3 == 0)
        return false;
    return total_area == area1 + area2 + area3;  
}