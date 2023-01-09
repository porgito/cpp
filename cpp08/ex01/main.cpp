/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:50:46 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 11:42:34 by jlaurent         ###   ########.fr       */
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
    sp.printVector();
    sp.addNumber(50, 100);
    sp.random();
    sp.printVector();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    try
    {
        Span    test(3);
        test.addNumber(5);
        std::cout << test.longestSpan() << std::endl;
    }
    catch(Span::NotEnoughNumbersException & e)
    {
        std::cerr << "Error: " <<e.what() << '\n';
    }
    std::cout << "---------------------------------------" << std::endl;
    try
    {
        Span    test(3);
        test.addNumber(5);
        std::cout << test.shortestSpan() << std::endl;
    }
    catch(Span::NotEnoughNumbersException & e)
    {
        std::cerr << "Error: " <<e.what() << '\n';
    }
    std::cout << "---------------------------------------" << std::endl;
    try
    {
        Span    test(10);
        test.random();
        test.printVector();
        test.addNumber(5);
    }
    catch(Span::VectorFullException & e)
    {
        std::cerr << "Error: " <<e.what() << '\n';
    }
    std::cout << "---------------------------------------" << std::endl;
    try
    {
        Span    test(0);
        test.random();
        test.printVector();
        test.addNumber(5);
    }
    catch(Span::VectorFullException & e)
    {
        std::cerr << "Error: " <<e.what() << '\n';
    }
/*    Span    enorme(10000);
    enorme.random();
    enorme.printVector();
    std::cout << enorme.shortestSpan() << std::endl;
    std::cout << enorme.longestSpan() << std::endl;
    */
    return 0;
}