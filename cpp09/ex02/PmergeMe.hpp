/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:43:28 by jlaurent          #+#    #+#             */
/*   Updated: 2023/04/12 18:43:28 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <deque>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <time.h>
#include <sys/time.h>

class PmergeMe
{
private:
    std::vector<int>    vct;
    std::deque<int>     deq;
    bool    check_list(char **av);
    void    push_nb(char **av);
    void    start_merge();
public:
    PmergeMe();
    ~PmergeMe();

    int    launch(char **av);

    template<typename T>
    int     mergesort(T &ctn, int len, int left)
    {
        if (left < len)
        {
            int mid = (len + left) / 2;
            mergesort(ctn, mid, left);
            mergesort(ctn, len, mid + 1);
            merge(ctn, left, mid, len);
        }
    }
    template<typename T>
    void    merge(T &ctn, int left, int mid, int len)
    {
        std::vector<int>    tmp(len + 1);
        int i = left, j = mid + 1, k = 0;
        while (i <= mid && j <= len)
        {
            if (ctn[i] > ctn[j])
                tmp[k++] = ctn[j++];
            else
                tmp[k++] = ctn[i++];  
        }
        while (i <= mid)
            tmp[k++] = ctn[i++];
        while (j <= len)
            tmp[k++] = ctn[j++];
        for (int final = 0; final < k; final++)
            ctn[left + final] = tmp[final];        
    }
};

#endif