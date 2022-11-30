/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:56:23 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/29 19:56:23 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void    Contact::info(int id)
{
    std::cout << "Entrez le prenom: ";
    std::getline(std::cin, first_name);
    std::cout << "Entrez le nom: "; 
    std::getline(std::cin, last_name);
    std::cout << "Entrez le surnom: ";
    std::getline(std::cin, nickname);
    std::cout << "Entrez le numero de telephone: ";
    std::getline(std::cin, phone_number);
    std::cout << "Entrez son plus lourd secret: ";
    std::getline(std::cin, darkest_secret);
    num = id;
    std::cout << "--------------------------------------\n";
    std::cout << "CONTACT AJOUTE AVEC SUCCES\n--------------------------------------" << std::endl;
}

void    Contact::truncate(std::string name)
{
    if (name.length() <= 10)
        std::cout << std::setw(10) << name << "|";
    else
    {
        name = name.substr(0,9) + ".";
        std::cout << std::setw(10) << name << "|";
    }
}

void    Contact::print(void)
{
    std::cout << std::setw(10) << num << "|";
    truncate(first_name);
    truncate(last_name);
    truncate(nickname);
    std::cout << std::endl;
}

void    Contact::printall(void)
{
    std::cout << "PRENOM: " << first_name << std::endl;
    std::cout << "NOM: " << last_name << std::endl;
    std::cout << "SURNOM: " << nickname << std::endl;
    std::cout << "NUMERO DE TELEPHONE: " << phone_number << std::endl;
    std::cout << "PLUS LOURD SECRET: " << darkest_secret << std::endl;
}