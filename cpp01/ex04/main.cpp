/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:12:11 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/06 19:12:11 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool    checkargs(int ac)
{
    if (ac != 4)
        return (false);
    return (true);
}

int main(int ac, char **argv)
{
    if (!checkargs(ac))
    {
        std::cout << "ERREUR AVEC LES ARGUMENTS, LE PROGRAMME PREND 3 PARAMETRES, UN NOM DE FICHIER ET DEUX STRINGS" << std::endl;
        return (0);
    }

    std::ifstream   read;
    std::ofstream   write;
    std::string     line;
    std::string     fileName = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    read.open(argv[1], std::fstream::in);
    if (!read)
    {
        std::cout << "erreur, pas de fichier correspondant" << std::endl;
        return (1);
    }
    write.open((fileName + ".replace"), std::fstream::out);
    if (!write)
    {
        std::cout << "erreur de creation du fichier replace" << std::endl;
        return (1);
    }
    while(getline(read, line))
    {
        size_t  pos = line.find(s1, 0);
        while (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find(s1, pos + s2.length());
        }
        write << line << std::endl;
    }
    read.close();
    write.close();
    return (0);
}