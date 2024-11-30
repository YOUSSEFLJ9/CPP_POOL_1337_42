/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:41:26 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/30 14:45:06 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array <int>arr(10);
        for (unsigned int i = 0; i < arr.size(); i++)
            arr[i] = i + 1;
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;

        const Array <int>arr2(arr);
        std::cout << "arr2 size: " << arr2.size() << std::endl;
        for (unsigned int i = 0; i < arr2.size(); i++)
            std::cout << arr2[i] << std::endl;

        Array<std::string>arr3(2);
        arr3[0] = "Hello";
        arr3[1] = "i study in 1337";
        for (unsigned int i = 0; i < arr3.size(); i++)
            std::cout << arr3[i] << std::endl;
        std::cout << "array 3 size: " << arr3.size() << std::endl;
        arr3[2] = "this is exception";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}