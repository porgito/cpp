/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:29:54 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/30 15:52:26 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char *change(char *ac)
{
	int	i;
	for (i = 0; ac[i] != '\0'; i++)
	{
		ac[i] = std::toupper(ac[i]);
	}
	return (ac);
}

int	main(int av, char **ac)
{
	int i;

	if (av == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; i < av; i++)
		std::cout << change(ac[i]);
	std::cout << std::endl;
	return (0);
}