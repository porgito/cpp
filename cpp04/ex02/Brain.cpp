/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:09:17 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/23 23:09:17 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
    std::cout << "Its brain has been created" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
    *this = rhs;
    return;
}

Brain::~Brain()
{
    std::cout << "Its brain has explosed" << std::endl;
}

Brain   &Brain::operator=(Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}