/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:36:24 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/30 02:36:24 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 22, 5), target("Default")
{
    std::cout << "Default PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 22, 5), target(target)
{
    std::cout << "PresidentialPardonForm created with this target: " << this->target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) 
{
    *this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm for target " << this->target << " destructed" << std::endl;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->canExe(executor);
    std::cout << this->target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
            std::cout << executor.getName() << " executed PresidentialPardonForm" << std::endl;
}