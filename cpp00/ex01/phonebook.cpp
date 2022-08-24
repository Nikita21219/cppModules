#include <iostream>
#include <string>

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() { idx = 0; }

void PhoneBook::addNewContact()
{
    static int index = 0;
    if (index > 7)
        index = 0;
    contacts[index++].initContact();
    idx++;
}

void PhoneBook::searchContact() {
    showContacts();
    if (idx > 0)
        displayContactInfo(askIndex());
}

void PhoneBook::showContacts()
{
    std::cout << "| "
              << " index "
              << " |"
              << "first name"
              << "| "
              << "last name"
              << "| "
              << "nickname"
              << " |"
              << std::endl;
    for (int i = 0; i < 8; i++)
        this->displayValues(this->contacts[i], i);
}

void PhoneBook::displayValue(std::string arg) {
    int i = -1;
    while (++i < 10 - (int) arg.length() && i < 10)
        std::cout << " ";
    i = -1;
    while (++i < 9 && i < (int)arg.length())
        std::cout << arg[i];
    char c = arg.length() > 9 ? '.' : arg[i];
    std::cout << c;
    std::cout << "|";
}

void PhoneBook::displayValues(Contact contact, int i) {
    std::cout << "         " << i << "|";
    this->displayValue(contact.getFirstName());
    this->displayValue(contact.getLastName());
    this->displayValue(contact.getNickname());
    std::cout << std::endl;
}

int PhoneBook::askIndex() {
    std::string line;

    std::cout << "Enter index: ";
    getline(std::cin, line);
    for (size_t i = 0; i < line.length(); i++)
        if (!std::isdigit(line[i])) 
            return -1;
    int result = std::atoi(line.c_str());
    if (result < 0 || result > this->idx - 1)
        return -1;
    return result < 0 || result > this->idx ? -1 : result;
}

void PhoneBook::displayContactInfo(int index) {
    if (index == -1)
        std::cout << "Index is not correct" << std::endl;
    else {
        printInfoContact(this->contacts[index]);
    }
}

void PhoneBook::printInfoContact(Contact contact) {
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}
