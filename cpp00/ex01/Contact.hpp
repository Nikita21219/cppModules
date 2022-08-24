#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;

public:
    Contact();
    void        initContact();
    void userInput(std::string *field, std::string fieldName);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};

#endif
