/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:27:52 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:27:52 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"


int main()
{
    Animal  *animals[10];
    std::cout << "-------CONSTRUCTOR--------" << std::endl;
    for (int i = 0; i < 5 ; i++)
        animals[i] = new Cat();
    for (int i = 5; i < 10 ; i++)
        animals[i] = new Dog();
    std::cout << "--------------------------" << std::endl;
    std::cout << "-------DESTRUCTOR--------" << std::endl;
    for (int i = 0; i < 10 ; i++)
        delete (animals[i]);
    std::cout << "-------------------------" << std::endl;

    return 0;
}
