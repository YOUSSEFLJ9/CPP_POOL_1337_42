/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:10:54 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/28 15:44:39 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    try
    {
        data.s1 = "Hello";
        data.ptr = new int(1337);
        data.c = 'c';
        data.l = powl(2, 63);

        uintptr_t addr = Serializer::serialize(&data);
        Data *ptr = Serializer::deserialize(addr);

        std::cout << "Address: " << addr  << "  "<< &data << std::endl;
        std::cout << "Address : " << ptr << std::endl;
        std::cout << "s1: " << ptr->s1 << std::endl;
        std::cout << "ptr: " << *ptr->ptr << std::endl;
        std::cout << "c: " << ptr->c << std::endl;
        std::cout << "l: " << ptr->l << std::endl;
        delete ptr->ptr;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}