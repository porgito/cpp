/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:16:38 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 22:16:38 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.class.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat const &rhs);
    ~WrongCat();

    WrongCat &operator=(WrongCat const &rhs);

    void    makeSound() const;
};

#endif