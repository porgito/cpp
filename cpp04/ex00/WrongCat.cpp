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

#include "WrongCat.class.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong cat";
    std::cout << "It's a wrong cat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
    *this = rhs;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "The wrong cat just died" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "uoaim uoaim" << std::endl;
}
