/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 02:01:29 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/03 02:01:29 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data    test;
    test.str = "Salut test";
    test.i = 666;
    uintptr_t raw;
    Data    *des;

    Serialize   seri;
    raw = seri.serialize(&test);
    des = seri.deserialize(raw);

    std::cout << "test: " << &test << ", " << ", " << test.str << ", " << test.i << std::endl;
    std::cout << "deserialize: " << &des << ", " << ", " << des->str << ", " << des->i << std::endl;
}