/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:23:09 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 22:32:23 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class mysed
{
    private:
        std::string filename;
        std::string data;
        std::string s1;
        std::string s2;
    public:
        mysed(std::string filename, std::string s1, std::string s2);
        ~mysed();

        void ft_read(std::string filename);
        void ft_replace(std::string &data, const std::string &s1, const std::string &s2);
        void ft_write(std::string filename);
};