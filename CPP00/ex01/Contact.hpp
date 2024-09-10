/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:44:12 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/08 18:03:43 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;
    int _is_space(std::string str);
    int _is_digit(std::string str);

public:
    void set_firstname();
    void set_lastname();
    void set_nickname();
    void set_phonenumber();
    void set_darksecret();
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_phonenumber();
    std::string get_darksecret();
};

#endif