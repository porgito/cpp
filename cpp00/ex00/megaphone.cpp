/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:29:54 by jlaurent          #+#    #+#             */
/*   Updated: 2022/11/22 19:21:42 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *change(char *ac)
{
	int	i;
	for (i = 0; ac[i] != '\0'; i++)
	{
		if (ac[i] >= 97 && ac[i] <= 122)
			ac[i] = ac[i] - 32;
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