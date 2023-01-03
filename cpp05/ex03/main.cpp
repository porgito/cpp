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
#include "Intern.class.hpp"

int main()
{
    Bureaucrat  phil("phil", 1);
    Intern      intern;
    Form        *shrub;

    std::cout << "////------------------SHRUBBERY------------------////" << std::endl;
    try
    {
        shrub = intern.makeForm("shrubbery creation", "tree");
        phil.signForm(*shrub);
        phil.executeForm(*shrub);
    }
    catch (Intern::DoesntExistException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "////------------------Robotomy------------------////" << std::endl;
    Form        *robo;
    try
    {
        robo = intern.makeForm("blblbl", "noob");   
        phil.signForm(*robo);
        phil.executeForm(*robo);
    }
    catch (Intern::DoesntExistException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "////------------------Presidential------------------////" << std::endl;
    Form        *presi;
    try
    {
        presi = intern.makeForm("presidential pardon", "phil");
        phil.signForm(*presi);
        phil.executeForm(*presi);
    }
    catch (Intern::DoesntExistException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    delete (shrub, robo, presi);
    return (0);
}