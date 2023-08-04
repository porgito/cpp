/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:42:46 by jlaurent          #+#    #+#             */
/*   Updated: 2023/03/22 02:42:46 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>

class BitcoinExchange
{
private:
    std::map<std::string, float> data;
    void    check_format(std::string file);
    bool    check_date(std::string date); 
    bool    check_y(std::string year);
    bool    check_m(std::string month);
    bool    check_d(std::string day);
    bool    check_v(std::string str);
    void    print(std::string str);
    float   get_v(std::string date);
public:
    BitcoinExchange();
    ~BitcoinExchange();

    int    start(std::string file);
};

#endif