/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:54:00 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/02 18:54:00 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.class.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "This program requires only one argument" << std::endl;
        return (1);
    }
    try
    {
        Convert convert(av[1]);
    }
    catch(const Convert::Error & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}