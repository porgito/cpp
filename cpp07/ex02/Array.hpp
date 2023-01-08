/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:10:48 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/07 15:10:48 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T   *arr;
    int n;
public:
    Array<T>()
    {
        this->arr = NULL;
        this->n = 0;
        std::cout << "Constructor called" << std::endl;
    }
    Array<T>(unsigned int n)
    {
        std::cout << "Constructor called" << std::endl;
        if (n < 0)
            throw   InvalidIndexException();
        this->n = n;
        this->arr = new T[n];

    }
    Array<T>(Array<T> const &rhs)
    {
        *this = rhs;
    }
    ~Array<T>()
    {
        std::cout << "Destructor called" << std::endl;
        if (this->n > 0)
            delete [] this->arr;
    }

    Array<T>   &operator=(Array<T> const &rhs)
    {
        this->arr = new T[rhs.n];
        this->n = rhs.n;
        for (int i = 0; i < this->n; i++)
            this->arr[i] = rhs.arr[i];
        return (*this);        
    }

    T    &operator[](int const &index)
    {
        if (index >= this->n || index < 0)
        {
            throw InvalidIndexException();
        }
        return (this->arr[index]);
    }

    int size() const
    {
        return (this->n);
    }

    T   adress() const
    {
        return (&this->arr);
    }

    class InvalidIndexException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("INVALID INDEX");
        }
    };  
};

template<typename T>
std::ostream    &operator<<(std::ostream &out, Array<T> const &rhs)
{
    out <<  rhs.adress();
    return out;
}

#endif