/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:52:55 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/28 17:52:55 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include "Form.class.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &rhs);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    std::string getName() const;
    int         getGrade() const;

    void    increase();
    void    decrease();

    void    setGrade(int grade);
    void    signForm(Form &form);
    void    executeForm(Form const &form);

    class GradeTooLowException : public std::exception
    {
    public:
        virtual char const *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        virtual char const *what() const throw();
    };

};

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &rhs);


#endif