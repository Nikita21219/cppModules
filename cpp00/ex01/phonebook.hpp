#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>

# include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int idx;

public:
    PhoneBook();
    void addNewContact();
    void searchContact();
    void showContacts();
    void displayValue(std::string arg);
    void displayValues(Contact contact, int i);
    int askIndex();
    void displayContactInfo(int index);
    void printInfoContact(Contact contact);
};

#endif
