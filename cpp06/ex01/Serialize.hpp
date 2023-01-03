/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 02:02:30 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/03 02:02:30 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_CLASS_HPP
# define SERIALIZE_CLASS_HPP

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
    std::string str;
    int         i;
};

class Serialize
{
public:
    Serialize();
    Serialize(Serialize const &rhs);
    ~Serialize();

    Serialize &operator=(Serialize const &rhs);

    uintptr_t   serialize(Data *ptr);
    Data        *deserialize(uintptr_t raw);
};

#endif