/*                                                                            */
/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:57:01 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/30 13:02:49 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(void);
    ~Zombie(void);
    void    announce( void );
    void    Name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
std::string rollName(int N);

#endif