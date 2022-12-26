/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:37:59 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 21:37:59 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(AAnimal const &rhs);
    virtual ~AAnimal();

    AAnimal  &operator=(AAnimal const &rhs);

    virtual void    makeSound() const = 0;
    virtual std::string     getType() const;
};



#endif