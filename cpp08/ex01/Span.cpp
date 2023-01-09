/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:01:39 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/08 22:01:39 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span(unsigned int N) : vct(0)
{
    std::cout << "Constructor called" << std::endl;
    this->N = N;
}

Span::Span(Span const &rhs)
{
    *this = rhs;
    return;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;   
}

Span    &Span::operator=(Span const &rhs)
{
    this->N = rhs.N;
    this->vct = rhs.vct;
    return (*this);
}

void    Span::addNumber(int i)
{
    if (this->vct.size() == this->N)
        throw Span::VectorFullException();
    this->vct.push_back(i);
}

int Span::longestSpan()
{
    std::vector<int>    longest = this->vct;

    if (this->vct.size() < 2)
        throw   Span::NotEnoughNumbersException();
    sort(longest.begin(), longest.end());
    return (*(longest.end() - 1) - *longest.begin());
}

int Span::shortestSpan()
{
    std::vector<int>    shortest = this->vct;               
    
    if (this->vct.size() < 2)
        throw   Span::NotEnoughNumbersException();
    sort(shortest.begin(), shortest.end());
    int test = *(shortest.begin() + 1) - *shortest.begin();
    if (this->vct.size() == 2)
        return (test);
    for (unsigned int i = 0; i < shortest.size() - 1; i++)
    {
        std::cout << shortest[i] << std::endl;
        if (shortest[i + 1] - shortest[i] < test)
            test = shortest[i + 1] - shortest[i];
    }
    return (test); 
}