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

std::string rollName(int N)
{
    std::string name[10] = { "Sully", "Bob", "Chichon", "Pipo", "Mino", "Bibou", "Nigo", "Bino", "Dibo", "Fido"};
    if (N > 9)
        N = N / 10;
    if (N > 99)
        N = N / 100;
    if (N > 9)
        return ("CLONE");
    return (name[N]);
}

int main()
{
    int N = 10;
    Zombie  *Horde = zombieHorde(N, rollName(N));
    for (int i = 0; i < N; i++)
        Horde[i].announce();
    delete [] Horde;
    return (0);
}