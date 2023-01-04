/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:56:02 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/04 17:11:57 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string str[4] = {"test", "slalut", "non", "oui"};
    std::cout << "----------STD::STRING TAB----------" << std::endl;
    iter<std::string>(str, 4, printTab<std::string>);

    int i[5] = {1, 20, 30, 100, 80};
    std::cout << "----------------INT----------------" << std::endl;
    iter<int>(i, 5, printTab<int>); 

    float f[6] = {0.0f, 156.1f, 156.0f, 77.516f, -0.010f};
    std::cout << "---------------FLOAT---------------" << std::endl;
    iter<float>(f, 5, printTab<float>);
    return (0);
}