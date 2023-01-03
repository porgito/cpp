/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:57:45 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/02 18:57:45 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

#include <string>
#include <iostream>
#include <climits>
#include <cctype>


class Convert
{
private:
    char    Char;
    int     Int;
    float   Float;
    double  Double;

    std::string str;
    int         type;

    int     getType();
    void    toChar();
    void    toInt();
    void    toFloat();
    void    toDouble();
    void    assign();
    void    printChar();
    void    printInt();
    void    printFloat();
    void    printDouble();
public:
    Convert();
    Convert(std::string const str);
    Convert(Convert const &rhs);
    ~Convert();

    Convert &operator=(Convert const &rhs);

    class Error : public std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("ERROR: Impossible to convert");
        }
    };

};


#endif