/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:37:59 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:37:59 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const &rhs);
    virtual ~Animal();

    Animal  &operator=(Animal const &rhs);

    virtual void    makeSound() const;
    std::string     getType() const;
};



#endif