# include <iostream>
# include <string>

# include "Contact.hpp"

Contact::Contact() {}

void Contact::initContact() {
    userInput(&FirstName, "first name");
    userInput(&LastName, "last name");
    userInput(&Nickname, "nickname");
    userInput(&PhoneNumber, "phone number");
    userInput(&DarkestSecret, "darkest secret");
}

void Contact::userInput(std::string *field, std::string fieldName) {
    while (1) {
        std::cout << "Enter " << fieldName << ": ";
        getline(std::cin, *field);
        if (std::cin.eof() || *field != "")
            break;
    }
}

std::string Contact::getFirstName() {
    return this->FirstName;
}

std::string Contact::getLastName() {return LastName;}

std::string Contact::getNickname() {return Nickname;}

std::string Contact::getPhoneNumber() {return PhoneNumber;}

std::string Contact::getDarkestSecret() {return DarkestSecret;}
