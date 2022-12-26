/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:16:38 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 22:16:38 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "AAnimal.class.hpp"
#include "Brain.class.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
private:
    Brain   *brain;
public:
    Cat();
    Cat(Cat const &rhs);
    ~Cat();

    Cat &operator=(Cat const &rhs);

    void    makeSound() const;
};

#endif