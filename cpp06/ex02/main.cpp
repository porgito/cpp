/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:56:26 by jlaurent          #+#    #+#             */
/*   Updated: 2023/01/03 21:56:26 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base    *generate(void)
{
    srand (time(NULL));
    int random = rand() % 3 + 1;
    if (random == 1)
        return (new A());
    else if (random == 2)
        return (new B());
    else if (random == 3)
        return (new C());
    else
        return (NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "The true type is A, with identify(Base *p)" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "The true type is B, with identify(Base *p)" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "The true type is C, with identify(Base *p)" << std::endl;
    else
        std::cout << "Error: UNKNOWN TYPE, with identify(Base *p)" << std::endl;
}

void    identify(Base &p)
{
    try 
    {
        A &test = dynamic_cast<A &>(p);
        std::cout << "The true type is A, with identify(Base &p)" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    
    }
    try 
    {
        B &test = dynamic_cast<B &>(p);
        std::cout << "The true type is B, with identify(Base &p)" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    
    }
    try 
    {
        C &test = dynamic_cast<C &>(p);
        std::cout << "The true type is C, with identify(Base &p)" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: UNKNOWN TYPE, with identify(Base &p)" << std::endl;
    }
}

int main()
{
    Base *base = generate();

    identify(base);
    identify(*base);

    std::cout << std::endl;

    class TEST : public Base
    {

    };
    Base *err = new TEST;
    identify(err);
    identify(*err);
    return (0);
}