/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:32:18 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/01 23:32:18 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern()
{
    std::cout << "A new intern is here !" << std::endl;
}

Intern::Intern(Intern const &rhs)
{
    *this = rhs;
}

Intern::~Intern()
{
    std::cout << "Intern escaped !!!" << std::endl;
}

Intern  &Intern::operator=(Intern const &rhs)
{
    return (*this);
}

Form	*shrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*robotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*presidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form    *Intern::makeForm(std::string formName, std::string target)
{
    Form    *(*forms[3])(std::string const &target) = {&shrubbery, &robotomy, &presidential};
    std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (forms[i](target));
        }
    }
    throw (Intern::DoesntExistException());
}