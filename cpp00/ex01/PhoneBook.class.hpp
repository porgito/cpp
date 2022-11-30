/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:51:48 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/28 23:51:48 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook
{
private:
    int     id;
    Contact contact[9];
    void    choose(int num, int full);
public:
    PhoneBook(void);
    ~PhoneBook(void);
    void    add(int num);
    void    search(int  num, int full);
};

#endif