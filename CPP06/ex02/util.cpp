/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:46:19 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/27 18:52:23 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

Base *generate(void)
{
    srand(static_cast<unsigned int>(time(0)));

    //  min + (rand() % (max - min + 1))
    int randint = 1 + (rand()%3);
    Base *base ;
        switch (randint)
        {
            case 1:
            {          
                A *a = new A();
                base = a;
                break;
            }
            case 2:
            {
                B *b = new B();
                base = b;
                break;
            }
            case 3:
            {
                C *c = new C();
                base = c;
                break;
            }
        }
    return base;
}

void identify(Base *p)
{
    std::cout << "Identify by pointer: p is pointing to : ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
    {
        delete p;
        throw std::runtime_error("Error: Base pointer not pointing to a derived class");
    }
}

void identify(Base &p)
{
    try
    {
        std::cout << "Identify by reference: p is referencing to : ";
        A &a = dynamic_cast<A&>(p);
        static_cast<void>(a);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            static_cast<void>(b);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                static_cast<void>(c);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                delete &p;
                std::cerr << "Error: Base reference not referencing to a derived class" << '\n';
            }
        }
        
    }

}
