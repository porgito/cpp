/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:29:06 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/29 17:29:06 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void    PhoneBook::add(int num)
{
    contact[num].info(num);
}

void    PhoneBook::choose(int num, int full)
{
    std::string numero;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "CHOISISSEZ UN CONTACT EN TAPANT SON NUMERO: ";
    std::getline(std::cin, numero);
    std::cout << "--------------------------------------" << std::endl;
    if (full == 0)
    {
       if (numero == "1")
           contact[1].printall();
        else if (numero == "2" && num >= 2)
            contact[2].printall();
        else if (numero == "3" && num >= 3)
            contact[3].printall();
        else if (numero == "4" && num >= 4)
            contact[4].printall();
        else if (numero == "5" && num >= 5)
            contact[5].printall();
        else if (numero == "6" && num >= 6)
            contact[6].printall();
        else if (numero == "7" && num >= 7)
            contact[7].printall();
        else if (numero == "8" && num >= 8)
            contact[8].printall();
        else
            std::cout << "NUMERO NON VALIDE, VEUILLEZ REESSAYER" << std::endl;
    }
    if (full == 1)
    {
        if (numero == "1")
           contact[1].printall();
        else if (numero == "2")
            contact[2].printall();
        else if (numero == "3")
            contact[3].printall();
        else if (numero == "4")
            contact[4].printall();
        else if (numero == "5")
            contact[5].printall();
        else if (numero == "6")
            contact[6].printall();
        else if (numero == "7")
            contact[7].printall();
        else if (numero == "8")
            contact[8].printall();
        else
            std::cout << "NUMERO NON VALIDE, VEUILLEZ REESSAYER" << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
}

void    PhoneBook::search(int num, int full)
{
    int i = 1;
    if (num == 0 && full == 0)
    {
        std::cout << "IL N'Y A PAS DE CONTACT DANS LE REPERTOIRE" << std::endl;
        return;
    }
    if (full == 0)
    {
        std::cout << "--------------------------------------" << std::endl;
        while (i <= num)
        {
            contact[i].print();
            i++;
        }
    }
    if (full == 1)
    {
        std::cout << "--------------------------------------" << std::endl;
        while (i <= 8)
        {
            contact[i].print();
            i++;
        } 
    }
    choose(num, full);
}