/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:43:17 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/29 17:43:17 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form(): name("Default form"), sign(false), gradeS(150), gradeE(150)
{
    std::cout << "Default form has been created, it can be signed and executed by everyone !" << std::endl;
}

Form::Form(std::string name, int gradeS, int gradeE) : name(name), sign(false), gradeS(gradeS), gradeE(gradeE)
{
    this->checkGrade(gradeS, gradeE);
    std::cout << "Form " << this->getName() << " has been created. It needs at least grade " << this->gradeS << " to be signed and " << this->gradeE << " to be executed" << std::endl;
}

Form::Form(Form const &rhs) : name(rhs.name), sign(false), gradeS(rhs.gradeS), gradeE(rhs.gradeE)
{
    std::cout << "Copy of " << this->getName() << " created" << std::endl;
    *this = rhs;
    return;
}

Form::~Form()
{
    std::cout << "Form " << this->getName() << " destructed" << std::endl;
}

Form    &Form::operator=(Form const &rhs)
{
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}

bool    Form::getSign() const
{
    return (this->sign);
}

int Form::getGradeS() const
{
    return (this->gradeS);
}

int Form::getGradeE() const
{
    return (this->gradeE);
}

void    Form::beSigned(Bureaucrat const &crat)
{
    if (this->sign == true)
    {
        std::cout << this->getName() << " has already been signed" << std::endl;
        return;
    }
    if (crat.getGrade() <= this->getGradeS())
    {
        std::cout << crat.getName() << " signed form " << this->getName() << std::endl;
        this->sign = true;
    }
    else
        std::cout << crat.getName() << " can't sign form " << this->getName() << " because his grade is too low" << std::endl;
}

void    Form::checkGrade(int gradeS, int gradeE)
{
    if (gradeS < 1 || gradeE < 1)
        throw Form::GradeTooHighException();
    else if (gradeS > 150 || gradeE > 150)
        throw Form::GradeTooLowException();
}

void    Form::execute(Bureaucrat const &executor) const
{
    return;
}

void    Form::canExe(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeE())
        throw (Form::GradeTooLowException());
    else if (this->getSign() == false)
        throw (Form::FormNotSignedException());
}

std::ostream    &operator<<(std::ostream &out, Form const &rhs)
{
    out << rhs.getName() << " recquires grade " << rhs.getGradeS() << " to be signed and grade " << rhs.getGradeE() << " to be executed.";
    if (rhs.getSign() == false)
        out << " This form isn't signed yet." << std::endl;
    else
        out << " This form is signed." << std::endl;
    return (out);
}