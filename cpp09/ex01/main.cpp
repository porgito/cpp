/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:55:33 by jlaurent          #+#    #+#             */
/*   Updated: 2023/03/22 02:55:33 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: bad input => RPN need one argument." << std::endl;
        return (1);
    }
    RPN c;
    c.start(av[1]);
}