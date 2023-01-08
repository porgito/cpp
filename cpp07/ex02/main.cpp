/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:20:22 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/07 17:20:22 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int>  v(10);
        for (int i = 0; i < 10 ; i++)
            v[i] = i;
        v[4] = v[7];

        for (int i = 0; i < 10; i++)
            std::cout << "Element: [" << i << "] = " << v[i] << std::endl;
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
    try
    {
        Array<int>  v(10);
        v[20] = 40;
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
    try
    {
        Array<int>  v(10);
        v[-1] = 150;
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
    try
    {
        int *a = new int();
        std::cout << a << std::endl;
        Array<int>  *b;
        std::cout << b << std::endl;
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
    try
    {
        Array<std::string>  str(5);
        str[0] = "TEST";
        str[1] = "QWERTY";
        str[2] = "NO NO NO NO NO NO";
        str[3] = "JOJOJOJOJOJOJOJOJO";
        str[4] = str[2];
        std::cout << str.size() << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << "STR[" << i << "]: " << str[i] << std::endl; 
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
    try
    {
        Array<std::string>  str;
        std::cout << str.size() << std::endl;
        Array<std::string>  copy(5);
        copy[0] = "TEST";
        copy[1] = "QWERTY";
        copy[2] = "NO NO NO NO NO NO";
        copy[3] = "JOJOJOJOJOJOJOJOJO";
        copy[4] = copy[2];
        str = copy;
        std::cout << str.size() << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << "STR[" << i << "]: " << str[i] << std::endl; 
    }
    catch(Array<int>::InvalidIndexException & e)
    {
        std::cerr << "Error:" << e.what() << '\n';
    }
    std::cout << "--------------------------------------" << std::endl;
}