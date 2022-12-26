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
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
    std::cout << "-------CONSTRUCTOR--------" << std::endl;
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << std::endl;
    const WrongAnimal   *wanimal = new WrongAnimal();
    const WrongAnimal   *wcat = new WrongCat();
    std::cout << "--------------------------" << std::endl;

    std::cout << "------TYPE AND SOUND------" << std::endl;
    std::cout << i->getType() << ": ";
    i->makeSound(); //will output the cat sound!
    std::cout << j->getType() << ": ";
    j->makeSound();
    std::cout << meta->getType() << ": ";
    meta->makeSound();
    std::cout << std::endl;
    std::cout << wanimal->getType() << ": ";
    wanimal->makeSound();
    std::cout << wcat->getType() << ": ";
    wcat->makeSound();
    std::cout << "--------------------------" << std::endl;
    std::cout << "-------DESTRUCTOR--------" << std::endl;
    delete(meta);
    delete(j);
    delete(i);
    std::cout << std::endl;
    delete(wanimal);
    delete(wcat);
    std::cout << "-------------------------" << std::endl;

    return 0;
}
