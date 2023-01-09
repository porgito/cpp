/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:23:17 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/08 20:23:17 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <iostream>
#include <vector>
#include <algorithm>

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

    void    addNumber(int i);
    int     shortestSpan();
    int     longestSpan();

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