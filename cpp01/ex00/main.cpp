/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:35:34 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/12 17:21:16 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
    Zombie *ZHeap = newZombie("ZHeap");

    randomChump("ZStack");

    ZHeap->announce();
    delete ZHeap;

    return (0);
}