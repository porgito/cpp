/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:13:43 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 14:44:04 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <iostream>
#include <string> 
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack()
    {
        std::cout << "Constructor called" << std::endl;
    }
    MutantStack(MutantStack const &rhs)
    {
        *this = rhs;
    }
    ~MutantStack()
    {
        std::cout << "Destructor called" << std::endl;
    }

    MutantStack &operator=(MutantStack<T> &rhs)
    {
        this->c = rhs.c;
        return;
    }

    typedef typename std::stack<T>::container_type::iterator    iter;
    iter    begin()
    {
        return (this->c.begin());
    }
    iter    end()
    {
        return (this->c.end());
    }
};

#endif