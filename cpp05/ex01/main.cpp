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
        Bureaucrat  def;
        Form        defForm;

        std::cout << defForm;
        def.signForm(defForm);
        std::cout << defForm;
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    try
    {
        Bureaucrat  phil("phil", 150);
        Bureaucrat  dede("dede", 1);
        Form        form("777", 149, 149);

        form.beSigned(phil);
        form.beSigned(dede);
        std::cout << form;
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    try
    {
        Bureaucrat  sai("sai", 20);
        Form        form("up", 151, 10);
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    try
    {
        Bureaucrat  sai("sai", 20);
        Form        form("down", 0, 10);
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    try
    {
        Bureaucrat  sai("sai", 20);
        Form        form("down", 1, 160);
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    try
    {
        Bureaucrat  mino("mino", 20);
        Bureaucrat  noob("noob", 150);
        Form        form("666", 20, 10);

        noob.signForm(form);
        mino.signForm(form);
        form.beSigned(mino);
        std::cout << form;
    }  
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    return (0);
}