/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:38:02 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:38:02 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "An animal has been created" << std::endl;
}

Animal::Animal(Animal const &rhs)
{
    *this = rhs;
    return;
}

Animal::~Animal()
{
    std::cout << "An animal just despawned" << std::endl;
}

Animal  &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "*animal sound*" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}