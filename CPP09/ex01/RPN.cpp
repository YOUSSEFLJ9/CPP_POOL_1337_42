/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:26:55 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/25 18:00:33 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void RPN::parse_arg(const std::string &arg)
{
    std::stringstream split(arg);
    std::string expression;
    if (arg[arg.size() -1] == ' ')
                throw std::invalid_argument("Error");
    while(std::getline(split,expression, ' '))
    {
        if (expression.size() == 1 && isdigit(expression[0]))
            stack.push(expression[0] - '0');
        else if (expression.size() == 1 && (expression[0] == '+' ||  expression[0] == '-' || expression[0] == '*' || expression[0] == '/'))
        {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            float A = stack.top();
            stack.pop();
            float B = stack.top();
            stack.pop();
            float rst = calculate(A , B, expression[0]);
            stack.push(rst);
        }
        else
        {
            throw std::invalid_argument("Error");
        }
    }
    if (stack.size() == 1)
    {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
    else
    {
                throw std::invalid_argument("Error");
    }
    stack.pop();
}
float RPN::calculate(float &a, float &b, char o)
{
    switch (o)
    {
    case '+':
        return a + b;
    case '-':
        return b - a;
    case '*':
        return a * b;
    case '/':
        return b / a;   
    default:
        throw std::runtime_error("uknown error!");
    }
}

RPN::RPN()
{
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this == &other)
        return *this;
    stack = other.stack;
    return *this;
}

RPN::~RPN()
{
}