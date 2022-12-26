/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:30:58 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 22:30:58 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "It's a dog" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
    *this = rhs;
    return;
}

Dog::~Dog()
{
    std::cout << "The dog just died" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "ouaf ouaf" << std::endl;
}
