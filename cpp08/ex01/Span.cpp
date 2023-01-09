/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:01:39 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 11:33:17 by jlaurent         ###   ########.fr       */
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

void    Span::addNumber(int begin, int end)
{
    if (end < begin)
        return;
    if (this->vct.size() == this->N)
        throw Span::VectorFullException();
    if ((end - begin + 1) > (N - this->vct.size()))
        throw Span::VectorFullException();
    for (int i = begin; i <= end; i++)
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
        if (shortest[i + 1] - shortest[i] < test)
            test = shortest[i + 1] - shortest[i];
    }
    return (test); 
}

void    Span::printVector()
{
    int ele;
    for (unsigned int i = 0; i < this->vct.size(); i++)
    {
        std::cout << this->vct[i] << ", ";
        ele = i + 1;
    }
    std::cout << "NUMBER OF ELEMENTS: " << ele << std::endl;
}

void    Span::random()
{
    int fill = this->N - this->vct.size();
    for (int i = 0; i < fill; i++)
        this->addNumber(rand() % (this->N * 10)); 
}

void    Span::addIter(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (end < begin)
        return;
    if ((end - begin + 1) > (N - this->vct.size()))
        throw Span::VectorFullException();
    copy(begin, end, std::back_inserter(this->vct));
}