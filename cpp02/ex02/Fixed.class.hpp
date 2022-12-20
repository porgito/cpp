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
#include <cmath>
#include <string>

class Fixed
{
private:
    int                 value;
    static int const    f_bits = 8;
public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed(int const c_int);
    Fixed(float const c_float);
    ~Fixed();

    Fixed   &operator=(Fixed const &rhs);
    
    Fixed   operator+(Fixed const &rhs);
    Fixed   operator-(Fixed const &rhs);
    Fixed   operator*(Fixed const &rhs);
    Fixed   operator/(Fixed const &rhs);

    Fixed   &operator++();
    Fixed   operator++(int);
    Fixed   &operator--();
    Fixed   operator--(int);

    bool    operator>(Fixed const &rhs) const;
    bool    operator<(Fixed const &rhs) const;
    bool    operator>=(Fixed const &rhs) const;
    bool    operator<=(Fixed const &rhs) const;
    bool    operator==(Fixed const &rhs) const;
    bool    operator!=(Fixed const &rhs) const;

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    static  Fixed   min(Fixed &a, Fixed &b);
    static  const Fixed min(Fixed const &a, Fixed const &b);
    static  Fixed   max(Fixed &a, Fixed &b);
    static  const Fixed max(Fixed const &a, Fixed const &b);   

};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif