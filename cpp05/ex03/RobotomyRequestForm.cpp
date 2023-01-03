/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:24:31 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/30 02:24:31 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("Default")
{
    std::cout << "Default RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm created with this target: " << this->target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) 
{
    *this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm for target " << this->target << " destructed" << std::endl;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->canExe(executor);
    std::cout << "BRRRRRRRRRRRRRRRR BRRRRRRRRRRRRRR ZZZZZZZZZZZZ" << std::endl;
    srand (time(NULL));
    int random = rand() % 100 + 1;
    if (random > 50)
        std::cout << "Unfortunately " << this->target << " robotomisation failed..." << std::endl;
    else
        std::cout << this->target << " has been successfully robotomised !" << std::endl;
        std::cout << executor.getName() << " executed RobotomyRequestForm" << std::endl;
}