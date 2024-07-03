#include "phonebook.h"

void addContact(const std::string& name, const std::string& phoneNumber, const std::string& nickname) {
        if (this->phoneIndexMap.find(phoneNumber) != this->phoneIndexMap.end()) {
            std::cout << "Phone number must be unique. This phone number already exists." << std::endl;
            return;
        }
        this->contacts.emplace_back(name, phoneNumber, nickname);
        this->phoneIndexMap[phoneNumber] = this->contacts.size() - 1;
        std::cout << "Contact added successfully." << std::endl;
    }

int main() {
    Phonebook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, REMOVE, BOOKMARK, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            std::string name, phoneNumber, nickname;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, phoneNumber);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, nickname);
            phonebook.addContact(name, phoneNumber, nickname);
        /*} else if (command == "SEARCH") {
            phonebook.searchContacts();
        } else if (command == "REMOVE") {
            phonebook.removeContact();
        } else if (command == "BOOKMARK") {
            phonebook.listBookmarks();
        } else if (command == "EXIT") {
            std::cout << "Exiting program." << std::endl;
            break; */
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}