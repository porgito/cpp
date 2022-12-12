/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:29:52 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/05 16:29:52 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        Horde[i].Name(rollName(i));
    return (Horde);
}