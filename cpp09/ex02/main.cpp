/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:43:34 by jlaurent          #+#    #+#             */
/*   Updated: 2023/04/12 18:43:34 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "ERROR: lack of arguments" << std::endl;
        return (0);
    }
    PmergeMe    test;
    test.launch(av);
}