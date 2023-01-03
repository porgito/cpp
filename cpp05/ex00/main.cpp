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

int main()
{
    try
    {
        Bureaucrat mike("mike", 1);
        Bureaucrat sammy("sammy", 150);
        Bureaucrat def;
        std::cout << def;
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat mino("mino", 151);
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    try
    {
        Bureaucrat phil("phil", 150);
        phil.decrease();
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    try
    {
        Bureaucrat dede("dede", 1);
        dede.increase();
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    return (0);
}