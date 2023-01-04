/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:01:50 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/04 13:51:01 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template< typename SWAP >
void    swap(SWAP &x, SWAP &y)
{
    SWAP tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template< typename MIN >
MIN min(MIN const &x, MIN const &y)
{
    return ( (x<y) ? x : y);
}

template< typename MAX >
MAX max(MAX const &x, MAX const &y)
{
    return ( (x>y) ? x : y);
}

#endif