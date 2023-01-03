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
    ~Form();

    Form    &operator=(Form const &rhs);

    std::string getName() const;
    bool        getSign() const;
    int         getGradeS() const;
    int         getGradeE() const;

    void    beSigned(Bureaucrat const &crat);
    void    checkGrade(int gradeS, int gradeE);

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

std::ostream    &operator<<(std::ostream &out, Form const &rhs);

#endif