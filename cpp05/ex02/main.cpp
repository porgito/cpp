/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:00 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/28 17:53:00 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

int main()
{
    std::cout << "////------------------SHRUBBERY------------------////" << std::endl;
    try
    {
        Bureaucrat  phil("phil", 1);
        Bureaucrat  noob("noob", 145);
        ShrubberyCreationForm   form("test");
        ShrubberyCreationForm   form145;
        phil.signForm(form);
        phil.executeForm(form);
        noob.signForm(form145);
        noob.executeForm(form145);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::FormNotSignedException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "////------------------Robotomy------------------////" << std::endl;
    try
    {
        Bureaucrat  phil("phil", 1);
        Bureaucrat  noob("noob", 72);
        RobotomyRequestForm   form("test");
        RobotomyRequestForm   form72;
        phil.signForm(form);
        phil.executeForm(form);
        noob.signForm(form72);
        noob.executeForm(form72);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::FormNotSignedException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "////------------------Presidential------------------////" << std::endl;
    try
    {
        Bureaucrat  phil("phil", 1);
        PresidentialPardonForm   form("test");
        PresidentialPardonForm   form25;
        phil.signForm(form);
        phil.executeForm(form);
        phil.executeForm(form25);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Form::FormNotSignedException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);
}