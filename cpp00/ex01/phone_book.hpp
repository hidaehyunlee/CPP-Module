#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iomanip>
# include <iostream>
# include "info.hpp"

class PhoneBook
{
private:
    int contactNum_;
    Info contact[8];

public:
    PhoneBook(void);
    void addContact(void);
    void searchContact(void);
};

void printAsciiHeader();

#endif