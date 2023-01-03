/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 02:01:27 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/03 02:01:27 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
    std::cout << "Constructor called" << std::endl;
}

Serialize::Serialize(Serialize const &rhs)
{
    *this = rhs;
}

Serialize::~Serialize()
{
    std::cout << "Destructor called" << std::endl;
}

Serialize   &Serialize::operator=(Serialize const &rhs)
{
    return *this;
}

uintptr_t   Serialize::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *Serialize::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}