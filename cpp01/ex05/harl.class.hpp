/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:02:33 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/07 16:02:33 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>
#include <string>

class harl
{
private:
    void    debug();
    void    info();
    void    warning();
    void    error();
public:
    harl();
    ~harl();

    void    complain(std::string level);
};

typedef void    (harl::*functions)(void);

#endif