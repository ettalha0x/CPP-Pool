/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:46:56 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/17 17:06:02 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <ctime>

const std::string RED_TEXT = "\033[1;31m";
const std::string GREEN_TEXT = "\033[1;32m";
const std::string YELLOW_TEXT = "\033[1;33m";
const std::string BLUE_TEXT = "\033[1;34m";
const std::string RESET_TEXT = "\033[0m";
const std::string MAGENTA_TEXT = "\033[1;35m";

static int count;
std::vector<int>    fillvector(int ac, char **av);
std::list<int>      fill_list(int ac, char **av);

template <typename iter>
iter safe_advance(iter it, typename iter::difference_type n, iter end)
{
	if (std::distance(it, end) < n)
		return end;
	std::advance(it, n);
	return it;
}

template <typename it>
void print_arr(it first, it end)
{
    for (; first != end; first = safe_advance(first, 1, end))
        std::cout << *first << ' ';
    std::cout << std::endl;
};


template <typename it>
void swap_pair(it first_unit_begin, it first_unit_end, it second_unit_begin, it second_unit_end)
{
    while (first_unit_begin != first_unit_end && second_unit_begin != second_unit_end)
        std::iter_swap(first_unit_begin++, second_unit_begin++);
    std::iter_swap(first_unit_begin, second_unit_begin);
};

template <typename it>
it searchInsertPos(it begin, it end , int val, size_t unit_size)
{

    // while (begin < end)
    while (std::distance(begin, end) > 0)
    {
        size_t sizeMain = std::distance(begin, end) / unit_size;
        // it Mid = begin + ((sizeMain / 2 ) * unit_size);
        it Mid = safe_advance(begin, ((sizeMain / 2) * unit_size), end);
        // it MidEnd = Mid + unit_size - 1;
        it MidEnd = safe_advance(Mid, unit_size - 1, end);
        count++;
        if (*MidEnd < val)
        {
            // begin = MidEnd + 1;
            begin = safe_advance(MidEnd, 1, end);
        }
        else
            end =  Mid;
    }
    return end;
}

template <typename container>
void pentToMain(container &pent, container &main, std::vector<int> &indexes, size_t unit_size, size_t index)
{   
    typedef typename container::iterator iter;
    // iter firstUB = pent.begin() + unit_size * index;
    iter firstUB = safe_advance(pent.begin(), (unit_size * index), pent.end());
    // iter firstUE = firstUB + unit_size - 1;
    iter firstUE = safe_advance(firstUB, (unit_size - 1), pent.end());
    // iter mainEnd = main.begin() + indexes[index];
    iter mainEnd = safe_advance(main.begin(), indexes[index], main.end());
    
    iter insertPos = searchInsertPos<iter>(main.begin(), mainEnd, *firstUE, unit_size);
    size_t insertionIndex = std::distance(main.begin(), insertPos);

    for(std::vector<int>::iterator it = indexes.begin(); it != indexes.end(); it++)
    if ((size_t)*it >= insertionIndex)
        (*it) += unit_size;

    indexes.erase(indexes.begin() + index);
    main.insert(insertPos, firstUB, safe_advance(firstUE, 1, pent.end()));
    pent.erase(firstUB, safe_advance(firstUE, 1, pent.end()));
}

template <typename container>
class PmergeMe
{
    public:
        typedef typename container::iterator iter;
        PmergeMe() { count = 0; };
        PmergeMe(PmergeMe const &copy) { *this = copy;};
        PmergeMe& operator=(PmergeMe const &copy) {
            (void)copy;
            return *this;
        }
        void FordAlgo(container &arr, iter end, size_t pair_size)
        {
            if (arr.size() == 1)
                return;
            iter lastPos = end;
            size_t unit_size = pair_size / 2;
            size_t unit_end = unit_size - 1;
            for (iter first_unit_begin = arr.begin(); first_unit_begin != end; first_unit_begin = safe_advance(first_unit_begin, pair_size, end))
            {
                // iter first_unit_end = first_unit_begin + unit_end;
                iter first_unit_end = safe_advance(first_unit_begin, unit_end, end);
                // iter second_unit_begin = first_unit_begin + unit_size;
                iter second_unit_begin = safe_advance(first_unit_begin, unit_size, end);
                
                // if (second_unit_begin >= end)
                if (std::distance(second_unit_begin, end) <= 0)
                {
                    lastPos = first_unit_begin;
                    break;
                }
                // iter second_unit_end = second_unit_begin + unit_end;
                iter second_unit_end = safe_advance(second_unit_begin, unit_end, end);
                count++;
                if (*first_unit_end > *second_unit_end)
                    swap_pair<iter>(first_unit_begin, first_unit_end, second_unit_begin, second_unit_end);
            }
            if (pair_size * 2 <= arr.size())
                FordAlgo(arr, lastPos, pair_size * 2);

            //------- reverse recursion -----------
            container main;
            container pent;
            std::vector<int> indexes;

            main.insert(main.end(), arr.begin(), safe_advance(arr.begin(), pair_size, arr.end()));
            for (iter it = safe_advance(arr.begin(), pair_size, arr.end()); std::distance(it, end) > 0; it = safe_advance(it, pair_size, end))
            {
                pent.insert(pent.end(), it, safe_advance(it, unit_size, end));
                indexes.push_back(std::distance(main.begin(), main.end()));
                // iter secondUB = it + unit_size;
                iter secondUB = safe_advance(it , unit_size, end);
                // if (secondUB >= end)
                if (std::distance(secondUB, end) <= 0)
                    break;
                main.insert(main.end(), secondUB, safe_advance(secondUB, unit_size, end));
            }
            indexes.push_back(std::distance(main.begin(), main.end()));
            arr.erase(arr.begin(), end);
            unsigned int jacobsthalArray[] = {2,2,6,10,22,42,86,170,342,682,1366,2730,5462,10922,21886,43762,87522,175046,350090,700174,1400354,2800718,5601458,11202922,22405842,44811686,89623506,179247022,358494042};
            for (int i = 0; jacobsthalArray[i] <= (pent.size() / unit_size); i++)
            {
                for (int j = jacobsthalArray[i] - 1; j >= 0; j--)
                {
                    pentToMain(pent, main, indexes, unit_size, j);
                }
            }
            while (!pent.empty())
                pentToMain<container>(pent, main, indexes, unit_size, 0);
            arr.insert(arr.begin(), main.begin(), main.end());
        }
        ~PmergeMe() {};
};

template <typename container>
double sort_container(container &arr) {
    PmergeMe< container > p1;

    std::clock_t start = std::clock();
    p1.FordAlgo(arr, arr.end(), 2);
    std::clock_t end = std::clock();
    double elapsedTime = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
    return elapsedTime;
}