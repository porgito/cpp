/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:23:17 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 11:16:07 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class Span
{
private:
    unsigned int        N;
    std::vector<int>    vct;
public:
    Span(unsigned int N);
    Span(Span const &rhs);
    ~Span();

    Span    &operator=(Span const &rhs);
    std::vector<int>    &operator[](Span const &index);

    void    addNumber(int i);
    void    addNumber(int begin, int end);
    int     shortestSpan();
    int     longestSpan();
    void    printVector();
    void    random();
    void    addIter(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    
    class VectorFullException : std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("SPAN IS FULL");
        }
    };
    class NotEnoughNumbersException : std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("NOT ENOUGH NUMBERS IN THE SPAN");
        }
    };
};


#endif