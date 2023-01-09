/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:28:07 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/09 15:50:44 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.class.hpp"
#include <list>

int main()
{
    std::cout << "------------STACK------------" << std::endl;
    std::stack<int> test;
    test.push(5);
    test.push(4);
    test.push(9);
    test.push(156);
    test.push(48515);
    test.push(11);
    test.push(-1);
    test.push(222);
    test.push(71);
    test.pop();
    std::cout << test.top() << " " << test.size() << std::endl;
    std::stack<int> copy;
    copy = test;
    std::cout << copy.top() << " " << copy.size() << std::endl;  
    std::cout << "---------MUTANTSTACK---------" << std::endl;
    MutantStack<int> mutant;
    mutant.push(5);
    mutant.push(587);
    mutant.push(-24);
    mutant.push(876);
    mutant.push(0);
    mutant.push(687);
    mutant.push(8);
    mutant.push(84645);
    mutant.push(71);
    mutant.pop();
    std::cout << mutant.top() << ", size: " << mutant.size() << std::endl;
    std::stack<int> copymutant;
    copymutant = mutant;
    std::cout << copymutant.top() << ", copy size: " << copymutant.size() << std::endl;
    MutantStack<int>::iter it = mutant.begin();
    MutantStack<int>::iter ite = mutant.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mutant);
    std::cout << s.top() << ", size: " << s.size() << std::endl;  
    std::cout << "------------LIST------------" << std::endl;
    std::list<int> mut;
    mut.push_back(5);
    mut.push_back(587);
    mut.push_back(-24);
    mut.push_back(876);
    mut.push_back(0);
    mut.push_back(687);
    mut.push_back(8);
    mut.push_back(84645);
    mut.push_back(71);
    mut.pop_back();
    std::cout << mut.back() << ", size: " << mut.size() << std::endl;
    std::list<int> copymut;
    copymut = mut;
    std::cout << copymut.back() << ", copy size: " << copymut.size() << std::endl;
    std::list<int>::iterator it1 = mut.begin();
    std::list<int>::iterator ite1 = mut.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    return (0);
}