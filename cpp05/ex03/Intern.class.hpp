/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:24:12 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/01 23:24:12 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"


class Intern
{ 
public:
    Intern();
    Intern(Intern const &rhs);
    ~Intern();

    Intern  &operator=(Intern const &rhs);

    Form    *makeForm(std::string const formName, std::string const target);
    
    class DoesntExistException : public std::exception
    {
    public:
        virtual char const *what() const throw()
        {
            return ("FORM DOESN'T EXIST");
        }
    };
};


#endif