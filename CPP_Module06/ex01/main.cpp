/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 00:57:50 by daelee            #+#    #+#             */
/*   Updated: 2021/05/02 11:26:39 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void printStatus(Data data)
{
    std::cout << "s1 = " << data.s1 << std::endl;
    std::cout << "n  = " << data.n << std::endl;
    std::cout << "s2 = " << data.s2 << std::endl;
}

void *serialize(void)
{
    srand(clock());
    
    std::string alpha_num = "abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ0123456789";
    Data data;

    data.n = rand();
    for (int i = 0; i < 8; i++)
    {
        data.s1 += alpha_num[rand() % alpha_num.length()];
        data.s2 += alpha_num[rand() % alpha_num.length()];
    }

    std::cout << "=========== Serialized data ===========" << std::endl;
    printStatus(data);

    char *raw = new char[52];
    memcpy(raw, &data.s1, 24);
    memcpy(raw + 24, &data.n, 4);
    memcpy(raw + 28, &data.s2, 24);

    return reinterpret_cast<void *>(raw);
}

Data *deserialize(void *raw)
{
    Data *des = new Data;

    des->s1 = std::string(reinterpret_cast<char *>(raw), 24);
    des->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 24);
    des->s2 = std::string(reinterpret_cast<char *>(raw) + 28, 24);

    std::cout << "========== Deserialized data ==========" << std::endl;
    printStatus(*des);

    return (des);
}

int main(void)
{
    std::cout << "================ Test ================" << std::endl;
    std::string a = "1";
    std::string b = "qwertyuiopasdfghjklzxcvbnm";
    std::cout << "sizeof(std::string) = "  << sizeof(std::string) << std::endl;
    std::cout << "sizeof(a), sizeof(b) = " << sizeof(a) << ", " << sizeof(b) << std::endl;

    void *raw = serialize();
    Data *des = deserialize(raw);

    delete reinterpret_cast<char *>(raw);
    delete des;

    return (0);
}