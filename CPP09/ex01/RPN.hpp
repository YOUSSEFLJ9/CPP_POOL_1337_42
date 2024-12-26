/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:28:46 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/25 17:54:43 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
  private:
    std::stack<float> stack;
    float calculate(float &a, float &b, char o);
  public:
    void parse_arg(const std::string &arg);
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN(); 
};