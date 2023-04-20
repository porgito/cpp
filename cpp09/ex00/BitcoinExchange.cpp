/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 02:32:38 by jlaurent          #+#    #+#             */
/*   Updated: 2023/03/20 02:32:38 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream fin("data.csv");
    std::string str;
    std::getline(fin, str);
    while (std::getline(fin, str))
    {
        std::stringstream ss(str);
        std::string date, rate;
        std::getline(ss, date, ',');
        std::getline(ss, rate);
        this->data[date] = std::stof(rate);
    }
    fin.close();

//    for (auto &i : this->data)
//    {
//        std::cout << i.first << " = " << i.second << std::endl;
//    }
}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::start(std::string file)
{
    std::ifstream fin(file);
    if (!fin)
    {
        std::cerr << "Error: could not find file." << std::endl;
    }
    std::string str;
    std::getline(fin, str);
    if (str != "date | value")
    {
        check_format(str);
    }
    while (std::getline(fin, str))
    {
        check_format(str);
    }
}

void    BitcoinExchange::check_format(std::string str)
{
    int err = 0;
    if (str[0] != '2')
        err = 1;
    if (!check_date(str))
        err = 1;
    if (err == 1)
    {
        std::cerr << "Error: bad input => " << str << std::endl;
        return;
    }
    if (!check_v(str))
        return;
    print(str);
}

bool    BitcoinExchange::check_date(std::string date)
{
    bool    ret = true;
    std::string         year, month, day, pipe;
    std::stringstream   ss(date);
    std::getline(ss, year, '-');
    if (!check_y(year))
        ret = false;
    std::getline(ss, month, '-');
    if (!check_m(month))
        ret = false;
    std::getline(ss, day, ' ');
    if (!check_d(day))
        ret = false;
    std::getline(ss, pipe, ' ');
    if (pipe  != "|")
        ret = false;
    return (ret);
}

bool    BitcoinExchange::check_y(std::string year)
{
    if (year.length() != 4)
        return (false);
    int y = std::stoi(year);
    if (y < 2009 || y > 2022)
        return (false);
    else
        return (true);
}

bool    BitcoinExchange::check_m(std::string month)
{
    bool    ret = false;
    std::string m[12] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
    for (int i = 0; i < 12; i++)
    {
        if (month == m[i])
            ret = true;
    }
    return (ret);
}

bool    BitcoinExchange::check_d(std::string day)
{
    if (day.length() != 2)
        return (false);
    int d = std::stoi(day);
    if (d < 1 || d > 31)
        return (false);
    else
        return (true); 
}

bool    BitcoinExchange::check_v(std::string str)
{ 
    std::stringstream ss(str);
    std::string value;
    std::getline(ss, value, '|');
    std::getline(ss, value);
    if (value[0] != ' ')
    {
        std::cerr << "Error: bad input => " << str << std::endl;
        return (false);
    }
    value.erase(value.begin());
    if (value[0] == '-')
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return (false);
    }
    if (!isdigit(value[0]) || value.back() == '.')
    {
        std::cerr << "Error: bad input => " << str << std::endl;
        return (false);
    }
    for (int i = 0, j = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]) && value[i] != '.')
        {
            std::cerr << "Error: bad input => " << str << std::endl;
            return (false);              
        }       
        if (value[i] == '.')
            j++;
        if (j > 1)
        {
            std::cerr << "Error: bad input => " << str << std::endl;
            return (false);              
        }
    }  
    float   v = std::stof(value);
    if (v > 1000)
    {
        std::cerr << "Error: too large number." << std::endl;
        return (false);
    }
    return (true);
}

void    BitcoinExchange::print(std::string str)
{
    std::replace(str.begin(), str.end(), '|', '=');
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '=')
            str.insert(i + 1, ">");
    }
    str.append(" = ");
    std::stringstream   ss(str);
    std::string         date, fill, value;
    std::getline(ss, date, ' ');
    std::getline(ss, fill, ' ');
    std::getline(ss, value);
    float   v = stof(value);
    float   c = v  * get_v(date);
    std::cout << str << c << std::endl;
}

float   BitcoinExchange::get_v(std::string date)
{
    std::map<std::string, float>::iterator it;
    it = this->data.find(date);
    if (it != this->data.end())
        return (it->second);
    it = this->data.upper_bound(date);
    if (it != this->data.begin())
        --it;
        return (it->second);
}