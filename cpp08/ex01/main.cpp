/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:50:46 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 01:50:46 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

int main()
{
    {
    Span sp(100);
    std::vector<int>    v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(17);
    v.push_back(9);
    v.push_back(11);
    sp.addIter(v.begin(), v.end());
    sp.addNumber(50, 100);
    sp.random();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}