/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:26:01 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/27 18:53:01 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"


int main()
{
        try
        {
            Base* base = generate();
            identify(base);
            identify(*base);
            delete base;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    return 0;
}