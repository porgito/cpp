/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:35:43 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/29 15:35:43 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const name;
    bool            sign;
    int const       gradeS;
    int const       gradeE;     
public:
    Form();
    Form(std::string name, int gradeS, int gradeE);
    Form(Form const &rhs);
    virtual ~Form();

    Form    &operator=(Form const &rhs);

    virtual     std::string getName() const;
    bool        getSign() const;
    int         getGradeS() const;
    int         getGradeE() const;

    void    beSigned(Bureaucrat const &crat);
    void    checkGrade(int gradeS, int gradeE);
    virtual void    execute(Bureaucrat const &executor) const = 0;
    void    canExe(Bureaucrat const &executor) const;

    class GradeTooLowException : public std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("GRADE TOO LOW");
        }
    };

    class GradeTooHighException : public std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("GRADE TOO HIGH");
        }
    };

    class FormNotSignedException : public std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("FORM NOT SIGNED");
        }
    };
};

std::ostream    &operator<<(std::ostream &out, Form const &rhs);

#endif