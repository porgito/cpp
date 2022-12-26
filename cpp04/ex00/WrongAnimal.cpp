/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:38:02 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:38:02 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong animal";
    std::cout << "A Wrong animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
    *this = rhs;
    return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "A Wrong animal just despawned" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "*Wrong animal sound*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}