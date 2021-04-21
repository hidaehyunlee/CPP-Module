/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:53:29 by daelee            #+#    #+#             */
/*   Updated: 2021/04/22 00:44:00 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error : Wrong Argument." << std::endl;
        return (1);
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "Error : Wrong Argument." << std::endl;
        return (1);
    }

    std::ifstream fin(filename);
    std::ofstream fout(filename + ".replace");
    if (fin.fail() || fout.fail())
    {
        std::cout << "Error : Can't open this file. Check filename." << std::endl;
        return (1);
    }

    std::string line;
    std::string::size_type pos;
    while (getline(fin, line))
    {
        while (1)
        {
            pos = line.find(s1);
            if (pos == std::string::npos)
                break;
            line.replace(pos, s1.length(), s2);
        }
        fout << line;
        if (!fin.eof())
            fout << '\n';
    }
    return (0);
}