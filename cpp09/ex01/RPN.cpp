/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:42:38 by jlaurent          #+#    #+#             */
/*   Updated: 2023/03/22 02:42:38 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    this->err = 0;
}

RPN::~RPN() {}

void    RPN::start(std::string str)
{
    if (!check(str))
        return;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            this->data.push(str[i] - '0');
        else if (str[i] == '+' || str[i] == '-'
                || str[i] == '/' || str[i] == '*')
            calcul(str[i]);
    }
    if (this->data.size() == 1 && this->err == 0)
        std::cout << this->data.top() << std::endl;
    else
        std::cerr << "Error: problem with result." << std::endl;
}

void    RPN::calcul(char token)
{
    if (this->data.size() > 1)
    {
        double  c1, c2;
        c2 = this->data.top();
        this->data.pop();
        c1 = this->data.top();
        this->data.pop();
        if (token == '+')
            this->data.push(c1 + c2);
        else if (token == '-')
            this->data.push(c1 - c2);
        else if (token == '/')
            this->data.push(c1 / c2);
        else if (token == '*')
            this->data.push(c1 * c2);
    }
    else
        this->err = 1;
}

bool    RPN::check(std::string str)
{
    if (!basic_test(str))
    {
        std::cerr << "Error: use of non numerical or operation character." << std::endl;
        return (false);
    }
    else if (!nb_test(str))
    {
        std::cerr << "Error: bad format." << std::endl;
        return (false);
    }
    return (true);
}

bool    RPN::basic_test(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '+' && str[i] != '-'
                && str[i] != '/' && str[i] != '*'
                && str[i] != ' ' && !isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool    RPN::nb_test(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            if (str[i + 1] != ' ')
                return (false);
        }
    }
    return (true);
}