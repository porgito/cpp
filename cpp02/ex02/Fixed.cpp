/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:54:32 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/12 17:54:32 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"


//DEFAULT//
Fixed::Fixed()
{
//    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
//    std::cout << "Destructor called" << std::endl;
    return;
}

////////////////////////////////////////////////////////
//CONSTRUCTOR//

Fixed::Fixed(Fixed const &src)
{
//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const c_int)
{
//    std::cout << "Int constructor called" << std::endl;
    this->value = c_int << f_bits;
}

Fixed::Fixed(float const c_float)
{
//    std::cout << "Float constructor called" << std::endl;
    this->value = roundf((c_float) * (1 << f_bits));
}
///////////////////////////////////////////////////////

Fixed   &Fixed::operator=(Fixed const &rhs)
{
//    std::cout << "Copy assignment operator called" << std::endl;
    this->value = rhs.getRawBits();
    return (*this);
}

////////////////////////////////////////////////////////
//OPERATEUR DE COMPARAISON//

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->value > rhs.value);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->value < rhs.value);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->value >= rhs.value);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->value <= rhs.value);
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->value == rhs.value);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->value != rhs.value);
}

////////////////////////////////////////////////////////
//OPERATEUR ARITHMETIQUE//

Fixed   Fixed::operator+(Fixed const &rhs)
{
    Fixed v;
    v.value = this->value + rhs.value;
    return (v);
}

Fixed   Fixed::operator-(Fixed const &rhs)
{
    Fixed v;
    v.value = this->value - rhs.value;
    return (v);
} 

Fixed   Fixed::operator*(Fixed const &rhs)
{
    Fixed v(this->toFloat() * rhs.toFloat());
    return (v);
}

Fixed   Fixed::operator/(Fixed const &rhs)
{
    Fixed v(this->toFloat() / rhs.toFloat());
    return (v);
}

//////////////////////////////////////////////////////////
//OPERATEUR INCREMENTATION ET DECREMENTATION//

Fixed   &Fixed::operator++()
{
    value++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed v = *this;
    ++*this;
    return (v);
}

Fixed   &Fixed::operator--()
{
    value--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed v = *this;
    --*this;
    return (v);
}

//////////////////////////////////////////////////////////

int Fixed::getRawBits() const
{
//    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
//    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float   Fixed::toFloat() const
{
    return ((float)value / (1 << f_bits));
}

int Fixed::toInt() const
{
    return (value >> f_bits);
}

Fixed  Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed const Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    else
        return (b); 
}

Fixed   Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed const Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
    out << obj.toFloat();
    return (out);
}