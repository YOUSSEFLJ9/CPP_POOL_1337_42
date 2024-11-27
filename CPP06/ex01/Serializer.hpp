/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:32:44 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/26 21:48:26 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdint>

struct Data
{
    std::string s1;
    int *ptr;
    char c;
    unsigned long l;
};

class Serializer
{
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    private:
    Serializer();
    Serializer(const Serializer& other);
    Serializer &operator=(const Serializer& other);
    ~Serializer();
};

# endif // SERIALIZER_HPP