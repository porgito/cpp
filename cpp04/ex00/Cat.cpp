/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:23:41 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 22:23:41 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "It's a cat" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
    *this = rhs;
    return;
}

Cat::~Cat()
{
    std::cout << "The cat just died" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "miaou miaou" << std::endl;
}
