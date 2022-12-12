/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:00:46 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/07 16:00:46 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.class.hpp"

int main()
{
    harl    harl;
    harl.complain("salut");
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
}