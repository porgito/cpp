/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:52:50 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/05 18:52:50 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Adresse de la string: " << &string << "\nAdresse du pointeur: " << stringPTR << "\nAdresse de la reference: " << &stringREF << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Valeur de la string: " << string << "\nValeur stringPTR: " << *stringPTR << "\nValeur stringREF: " << stringREF << std::endl;
    
    return (0);
}