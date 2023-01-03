/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:52:58 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/28 17:52:58 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
    std::cout << "Bureaucrat " << this->getName() << " has been created and has a grade of " << this->getGrade() << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->setGrade(grade);
    std::cout << "Bureaucrat " << this->getName() << " has been created and has a grade of " << this->getGrade() << std::endl;     
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : name(rhs.name)
{
    *this = rhs;
    return;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->name << " has been fired" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->grade = rhs.grade;
    return (*this);
}

std::string    Bureaucrat::getName() const
{
    return (this->name);
}

int    Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::increase()
{
    std::cout << "Grade increased for " << this->getName() << ", new grade: " << this->grade - 1 << std::endl;
    this->setGrade(this->grade - 1);
}

void    Bureaucrat::decrease()
{
    std::cout << "Grade decreased for " << this->getName() << ", new grade: " << this->grade + 1 << std::endl;
    this->setGrade(this->grade + 1);
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GRADE TOO LOW");
};

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GRADE TOO HIGH");
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << " / " << rhs.getGrade() << std::endl;
    return (out); 
}