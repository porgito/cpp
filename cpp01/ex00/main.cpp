/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:35:34 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/05 15:35:34 by jlaurent         ###   ########.fr       */
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