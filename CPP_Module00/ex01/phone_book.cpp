/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:59:54 by daelee            #+#    #+#             */
/*   Updated: 2021/04/18 20:23:13 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int PhoneBook::getContactNum(void) const { return (contactNum_); }

int PhoneBook::addContact(void) 
{
    int i;
    std::string input;
    
    if (contactNum_ == 8)
    {
        std::cout << "Phonebook is full!" << std::endl;
        return (SUCCESS);
    }
    i = contactNum_++;
    std::cout << std::endl;
    std::cout << "1. First Name : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setFirstName(input);

    std::cout << "2. Last Name : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setLastName(input);

    std::cout << "3. Nickname : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setNickname(input);

    std::cout << "4. Login : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setLogin(input);

    std::cout << "5. Postal Address : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setPostalAddress(input);

    std::cout << "6. Email Address : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setEmailAddress(input);

    std::cout << "7. Phone Number : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setPhoneNumber(input);

    std::cout << "8. Birthday Date : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setBirthdayDate(input);

    std::cout << "9. Favorite Meal : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setFavoriteMeal(input);

    std::cout << "10. Underwear Color : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setUnderwearColor(input);

    std::cout << "11. Darkest Secret : ";
    if (!(std::getline(std::cin, input)))
        return (ERROR);
    contact[i].setDarkestSecret(input);

    return (SUCCESS);
}

int PhoneBook::searchContact(void)
{
    int i;
    
    if (getContactNum() == 0)
    {
        std::cout << "The PhoneBook is empty!" << std::endl;
        return (ERROR);
    }
    printAllContact();
    std::cout << std::endl;
    std::cout << "Select the index : " ;
    std::cin >> i;
    if (std::cin.eof())
        exit(1);
    if (std::cin.fail() || i <= 0 || i > 8)
    {
        std::cout << "wrong input!" << std::endl;
        std::cin.clear();
        std::cin.ignore(MAX_INPUT_SIZE, '\n');
    }
    else
    {
        std::cin.ignore(MAX_INPUT_SIZE, '\n');
        PrintDetailContact(i);
    }
    return (SUCCESS);
}

std::string PhoneBook::cutLettersToTen(const std::string str) const
{
    std::string tmp;

    if (str.length() > 10)
        tmp = str.substr(0, 9) + ".";
    else
        tmp = str;
    return (tmp);
}

void PhoneBook::printAllContact(void) const
{
    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 1; i <= contactNum_; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << cutLettersToTen(contact[i - 1].getFirstName()) << "|";
        std::cout << std::setw(10) << cutLettersToTen(contact[i - 1].getLastName()) << "|";
        std::cout << std::setw(10) << cutLettersToTen(contact[i - 1].getNickname()) << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    }
}

void PhoneBook::PrintDetailContact(const int i) const
{
    Info info = contact[i - 1];

    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "First Name : " << info.getFirstName() << std::endl;
    std::cout << "Last Name : " << info.getLastName() << std::endl;
    std::cout << "Nickname : " << info.getNickname() << std::endl;
    std::cout << "Login : " << info.getLogin() << std::endl;
    std::cout << "Postal Address : " << info.getPostalAddress() << std::endl;
    std::cout << "Email Address : " << info.getEmailAddress() << std::endl;
    std::cout << "Phone Number : " << info.getPhoneNumber() << std::endl;
    std::cout << "Birthday Date : " << info.getBirthdayDate() << std::endl;
    std::cout << "Favorite Meal : " << info.getFavoriteMeal() << std::endl;
    std::cout << "Underwear Color : " << info.getUnderwearColor() << std::endl;
    std::cout << "Darkest Secret : " << info.getDarkestSecret() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}