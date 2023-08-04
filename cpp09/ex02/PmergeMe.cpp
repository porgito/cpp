/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:43:30 by jlaurent          #+#    #+#             */
/*   Updated: 2023/04/12 18:43:30 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}


bool    PmergeMe::check_list(char **av)
{
    int i = 1;
    std::string list;
    while(av[i])
    {
        list = av[i];
        if (list[0] == '-')
            return (false);
        if (list.length() > 10 || (list.length() == 10 && list > "2147483647"))
            return (false);
        if (!list.empty() && list.find_first_not_of("1234567890") != std::string::npos)
            return (false);
        i++;
    }
    return (true);
}

void    PmergeMe::push_nb(char **av)
{
    int i = 1;
    std::string nb;
    while (av[i])
    {
        nb = av[i];
        vct.push_back(stoi(nb));
        deq.push_back(stoi(nb));
        i++;
    }
}

void    PmergeMe::start_merge()
{
    struct timespec before;
    clock_gettime(CLOCK_MONOTONIC, &before);
    mergesort(vct, vct.size() - 1, 0);
    struct timespec after;
    clock_gettime(CLOCK_MONOTONIC, &after);

    std::cout << "After: ";
    int test = 1;
    for (auto &i : vct)
    {
        if (test > 5)
        {
            std::cout << "[...]";
            break; 
        }      
        std::cout << i << " ";
        test++;
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << vct.size() << " elements with std::vector : " << after.tv_nsec - before.tv_nsec << std::endl;
}

int    PmergeMe::launch(char **av)
{
    if (!check_list(av))
    {
        std::cout << "ERROR: problem with one or a few arguments" << std::endl;
        return (0);
    }
    push_nb(av);
    std::cout << "Before: ";
    int test = 1;
    for (auto &i : vct)
    {
        if (test > 5)
        {
            std::cout << "[...]";
            break; 
        }      
        std::cout << i << " ";
        test++;
    }
    std::cout << std::endl;
    start_merge();
    return (0);
}