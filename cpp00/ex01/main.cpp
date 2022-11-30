/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:52:00 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/28 23:52:00 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string buff;
    int         num = 0;
    int         full = 0;
    std::cout << "-------ENTREZ UNE COMMANDE-------\n";
    std::cout << "-ADD pour enregistrer un nouveau contact\n";
    std::cout << "-SEARCH pour afficher un contact\n";
    std::cout << "-EXIT pour quitter le programme" << std::endl;
    while (1)
    { 
        std::getline(std::cin, buff);
        if (buff == "EXIT")
            return (0);
        else if (buff == "ADD")
        {
            num++;
            if (num > 8)
            {
                num = 1;
                full = 1;
            }
            phonebook.add(num);
        }
        else if (buff == "SEARCH")
            phonebook.search(num, full);
        else
            std::cout << "ERREUR: COMMANDE INEXISTANTE" << std::endl;
    }
    return (0);
}