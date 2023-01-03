/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:04:41 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/02 19:04:41 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.class.hpp"

Convert::Convert()
{
    std::cout << "Default constructor called" << std::endl;
}

Convert::Convert(std::string const str) : str(str)
{
    std::cout << "Constructor called for " << this->str << std::endl;
    this->Double = atof(this->str.c_str());
    this->type = this->getType();
    this->assign();
    this->printChar();
    this->printInt();
    this->printFloat();
    this->printDouble();
}

Convert::Convert(Convert const &rhs)
{
    *this = rhs;
    this->printChar();
    this->printInt();
    this->printFloat();
    this->printDouble();
}

Convert::~Convert()
{
    std::cout << "Destructor called" << std::endl;
}

Convert &Convert::operator=(Convert const &rhs)
{
    this->Char = rhs.Char;
    this->Int = rhs.Int;
    this->Float = rhs.Float;
    this->Double = rhs.Double;
    this->type = rhs.type;
    return *this;
}

int Convert::getType()
{
    if (this->str.length() == 1 && isprint(str[0]) && isalpha(str[0]))
        return (1);
    else if (this->str.find_first_of("+-") != this->str.find_last_of("+-"))
		return (-1);
    else if (this->str.find_first_not_of("-+0123456789") == std::string::npos)
        return (2);
    else if (this->str.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		if (this->str.find_first_of(".") != this->str.find_last_of(".") || // 0..0
			isdigit(this->str[this->str.find_first_of(".") + 1]) == false || // 0.
			this->str.find_first_of(".") == 0) // .0
			return (-1);
		else
			return (4);
    }
    else if (this->str.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (this->str.find_first_of("f") != this->str.find_last_of("f") || // 0.0ff
			this->str.find_first_of(".") != this->str.find_last_of(".") || // 0..0f
			this->str.find_first_of("f") - this->str.find_first_of(".") == 1 || // 0.f
			this->str.find_first_of(".") == 0 || // .0f
			this->str[this->str.find_first_of("f") + 1] != '\0') // 0.0f0
			return (-1);
		else
			return (3);
    }
    else if (this->str.compare("-inff") == 0 || this->str.compare("+inff") == 0 ||
             this->str.compare("nanf") == 0 || this->str.compare("-inf") == 0 ||
             this->str.compare("+inf") == 0 || this->str.compare("nan") == 0)
            return (5);
    else
        return (-1);
}

void    Convert::assign()
{
    if (type == 1)
        this->toChar();
    else if (type == 2)
        this->toInt();
    else if (type == 3)
        this->toFloat();
    else if (type == 4)
        this->toDouble();
    else if (type == 5)
        return;
    else
        throw (Convert::Error());
}

void    Convert::toChar()
{
	this->Char = static_cast<unsigned char>(this->str[0]);
	this->Int = static_cast<int>(this->Char);
	this->Float = static_cast<float>(this->Char);
	this->Double = static_cast<double>(this->Char);
}
void    Convert::toInt()
{
	this->Int = static_cast<int>(this->Double);
	this->Char = static_cast<unsigned char>(this->Int);
	this->Float = static_cast<float>(this->Double);
}
void    Convert::toFloat()
{
	this->Float = static_cast<float>(this->Double);
	this->Char = static_cast<char>(this->Float);
	this->Int = static_cast<int>(this->Float);
}
void    Convert::toDouble()
{
	this->Char = static_cast<char>(this->Double);
	this->Int = static_cast<int>(this->Double);
	this->Float = static_cast<float>(this->Double);
}

void    Convert::printChar()
{
    if (this->Double <= CHAR_MAX && this->Double >= CHAR_MIN && this->type != 5)
    {
        if (isprint(this->Char))
            std::cout << "char: " << this->Char << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}
void    Convert::printInt()
{
    if (this->Double >= INT_MIN && this->Double <= INT_MAX && this->type != 5)
        std::cout << "int: " << this->Int << std::endl;
    
    else
        std::cout << "int: impossible" << std::endl;
}
void    Convert::printFloat()
{   
    if (this->type != 5)
    {
        std::cout << "float: " << this->Float;
        if (this->Float - this->Int == 0)
            std::cout << ".0f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
    else
    {
        if (this->str == "+inff" || this->str == "+inf")
            std::cout << "float: +inff" << std::endl;
        else if (this->str == "-inff" || this->str == "-inf")
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "float: nanf" << std::endl;
    }
}

void    Convert::printDouble()
{
    if (this->type != 5)
    {
        std::cout << "double: " << this->Double;
        if (this->Double < INT_MIN || this->Double > INT_MAX || this->Double - this->Int == 0)
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
    else
    {
        if (this->str == "+inff" || this->str == "+inf")
            std::cout << "double: +inf" << std::endl;
        else if (this->str == "-inff" || this->str == "-inf")
            std::cout << "double: -inf" << std::endl;
        else
            std::cout << "double: nan" << std::endl;
    }
}