/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:07 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 22:18:07 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "AAnimal.class.hpp"
#include "Brain.class.hpp"
#include <iostream>
#include <string>

class Dog : public AAnimal
{
private:
    Brain   *brain;
public:
    Dog();
    Dog(Dog const &rhs);
    ~Dog();

    Dog &operator=(Dog const &rhs);

    void    makeSound() const;
};

#endif