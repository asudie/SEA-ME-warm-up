#include "phonebook.h"

void Phonebook::addContact(const std::string& name, const std::string& phoneNumber, const std::string& nickname) {
        if (phoneIndexMap.find(phoneNumber) != phoneIndexMap.end()) {
            std::cout << "Phone number must be unique. This phone number already exists." << std::endl;
            return;
        }
        contacts.emplace_back(name, phoneNumber, nickname);
        phoneIndexMap[phoneNumber] = contacts.size() - 1;
        std::cout << "Contact added successfully." << std::endl;
}

void Phonebook::searchContacts() {
    if (contacts.empty()) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    for (size_t i = 0; i < contacts.size(); ++i) {
        std::cout << i << ". " << contacts[i].name << " (" << contacts[i].nickname << ")" << std::endl;
    }
    std::cout << "Enter index of contact to view details: ";
    int index;
    std::cin >> index;
    if (index >= 0 && index < (int)contacts.size()) {
        displayContactDetails(index);
    } else {
        std::cout << "Invalid index." << std::endl;
    } 
}

void Phonebook::displayContactDetails(int index) {
    Contact& contact = contacts[index];
    std::cout << "Name: " << contact.name << std::endl;
    std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Bookmarked: " << (contact.bookmarked ? "Yes" : "No") << std::endl;
    std::cout << "Do you want to bookmark this contact? (yes/no): ";
    std::string response;
    std::cin >> response;
    if (response == "yes") {
        contact.bookmarked = true;
        std::cout << "Contact bookmarked." << std::endl;
    }
    else if (response == "no") {
        contact.bookmarked = false;
        std::cout << "Contact is NOT bookmarked." << std::endl;
    } 
    else
        std::cout << "Only yes or no, please" << std::endl;
}

void Phonebook::listBookmarks() {
    for (const auto& contact : contacts) {
        if (contact.bookmarked) {
            std::cout << contact.name << " (" << contact.nickname << ") - " << contact.phoneNumber << std::endl;
        }
    }
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
        } else if (command == "SEARCH") {
            phonebook.searchContacts();
        } else if (command == "REMOVE") {
            phonebook.removeContact();
        } else if (command == "BOOKMARK") {
            phonebook.listBookmarks(); 
        } else if (command == "EXIT") {
            std::cout << "Exiting program." << std::endl;
            break; 
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}