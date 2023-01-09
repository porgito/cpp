/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:18:02 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/08 19:18:02 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

void displayInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::vector<int>    vector;
    for (int i = 0; i <= 10; i++)
        vector.push_back(i);
    for_each(vector.begin(), vector.end(), displayInt);

    easyfind(vector, 9);
    easyfind(vector, 1);
    easyfind(vector, 0);
    easyfind(vector, 10);
    try
    {
        easyfind(vector, 11);
    }
    catch(NoOccurenceException & e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    std::cout << "------------------------------" << std::endl;
    std::list<int>  lst;
    for (int i = 0; i <= 10; i++)
        lst.push_front(i);
    for_each(lst.begin(), lst.end(), displayInt);
    easyfind(lst, 9);
    easyfind(lst, 1);
    easyfind(lst, 0);
    easyfind(lst, 10);
    try
    {
        easyfind(lst, 11);
    }
    catch(NoOccurenceException & e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }   
}