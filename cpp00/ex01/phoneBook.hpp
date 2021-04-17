#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include "info.hpp"
# include "utils.hpp"

class phoneBook
{
private:
    int num_of_contact;
    info contact[8];

public:
    phoneBook(void);
    void add(void);
    void search(void);
};

void printAsciiHeader();

#endif