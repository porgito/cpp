/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:17:27 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/30 01:17:27 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("Default")
{
    std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm created with this target: " << this->target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : Form("ShrubberyCreationForm", 145, 137), target(rhs.target)
{
    *this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm for target " << this->target << " destructed" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->canExe(executor);
    std::ofstream   file(this->target + "_shrubbery");
    for (int i = 0; i < 10; i++)
    {
        file << "    *" << std::endl;
        file << "   /.\\" << std::endl;
        file << "  /o..\\" << std::endl;
        file << "  /..o\\" << std::endl;
        file << " /.o..o\\" << std::endl;
        file << " /...o.\\" << std::endl;
        file << "/..o....\\" << std::endl;
        file << "^^^[_]^^^" << std::endl;
        file << std::endl;
    }
    file.close();
    std::cout << executor.getName() << " executed ShrubberyCreationForm" << std::endl;
}  