/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:38:02 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:38:02 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "An Aanimal has been created" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
    *this = rhs;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "An Aanimal just despawned" << std::endl;
}

AAnimal  &AAnimal::operator=(AAnimal const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    AAnimal::makeSound() const
{
    std::cout << "*Aanimal sound*" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}