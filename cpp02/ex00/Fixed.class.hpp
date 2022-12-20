/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:45:30 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/12 17:45:30 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_CLASS_HPP
# define    FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
    int                 value;
    static int const    f_bits = 8;
public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed   &operator=(Fixed const &rhs);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};



#endif