# include <iostream>
# include <string>

# include "PhoneBook.hpp"
# include "Contact.hpp"

int main() {
    PhoneBook book;

    std::string line;

    while (true)
    {
        std::cout << "Enter your command: ";
        getline(std::cin, line);
        if (std::cin.eof() || line == "EXIT")
            break;
        else if (line == "ADD" || line == "add")
            book.addNewContact();
        else if (line == "SEARCH" || line == "search")
            book.searchContact();
        else
            std::cout << "Incorrect input" << std::endl;
    }
    return 0;
}
