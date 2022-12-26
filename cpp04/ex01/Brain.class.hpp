/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:59:05 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/23 22:59:05 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
    std::string ideas[100];    
public:
    Brain();
    Brain(Brain const &rhs);
    ~Brain();

    Brain   &operator=(Brain const &rhs);
};


#endif