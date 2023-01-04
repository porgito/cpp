/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:55:59 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/04 15:19:18 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template<typename ITER>
void    iter(ITER const *a, int const &b, void(*f) (ITER const &))
{
    for (int i = 0; i < b; i++)
        f(a[i]);
}

template<typename ITER>
void    printTab(ITER const &element)
{
    std::cout << element << std::endl;
}

#endif