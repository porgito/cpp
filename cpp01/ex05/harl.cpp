/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:01:46 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/07 16:01:46 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.class.hpp"

harl::harl()
{
    return;
}

harl::~harl()
{
    return;
}

void    harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    harl::complain(std::string level)
{
    int i = 0;

    functions   f[] = {&harl::debug, &harl::info, &harl::warning, &harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};

    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*f[i])();
            return;
        }
        i++;
    }
    std::cout << "NOTHING TO SAY ABOUT: " << level << std::endl;
}