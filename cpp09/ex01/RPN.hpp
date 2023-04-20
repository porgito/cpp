/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:43:04 by jlaurent          #+#    #+#             */
/*   Updated: 2023/03/22 02:43:04 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>

class RPN
{
private:
    std::stack<double>  data;
    void    calcul(char token);
    bool    check(std::string str);
    bool    basic_test(std::string str);
    bool    nb_test(std::string str);
    int     err;
public:
    RPN();
    ~RPN();

    void    start(std::string str);
};

#endif