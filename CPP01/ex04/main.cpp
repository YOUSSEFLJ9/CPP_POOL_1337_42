/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:51:53 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/14 15:11:57 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std :: cout << "Usage: ./Sed_is_for_losers [file] [search] [replace]"<<std:: endl;
        return (1);
    }
    std::string file, search, replace;
    file = av[1];
    search = av[2];
    replace = av[3];
    if (search.empty())
    {
        std::cout <<"Error:  Search can't be empty";
        return (1);
    }
    std::fstream myfile(file);
    if (!myfile.is_open())
    {
        std::cout << "Error: can't find file";
        return (1);
    }
    std::string line;
    std::string newline;
       
    while (std::getline(myfile, line))
    {
        if (!myfile.eof())
            line += "\n";
        size_t postion = 0;
        while( (postion= line.find(search, postion)) != std::string:: npos)
        {
            line = ft_replace(postion, search.length(), replace, line);
            postion += replace.length();   
        }
        newline += line;
    }
    std::string newfile = file+ ".replace";
    std::fstream mynewfile(newfile, std::ios::out);
    if(!mynewfile.is_open())
    {
        myfile.close();
         std::cout << "Error: can't create file";
        return (1);   
    }
    mynewfile << newline;
    
}