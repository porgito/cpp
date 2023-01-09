/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:12:16 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/08 18:12:16 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

class NoOccurenceException : std::exception
{
public:
    const char *what() const throw ()
    {
        return ("No occurence found for n in this container");
    }
};


template<typename T>
typename T::iterator  easyfind(T &type, int n)
{
    typename T::iterator res;

    res = find(type.begin(), type.end(), n);
    if (res == type.end())
        throw NoOccurenceException();
    else
        std::cout << "Occurence found for " << n << std::endl;
    return (res);
}

#endif