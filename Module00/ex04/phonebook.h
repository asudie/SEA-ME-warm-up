#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>


class Phonebook
{
    private:
        std::vector<Contact> contacts;
        std::map<std::string, int> phoneIndexMap; // Map to ensure unique phone numbers

    public:
        void addContact(const std::string& name, const std::string& phoneNumber, const std::string& nickname);
        void searchContacts();
        void removeContact();
        void listBookmarks();
};

struct Contact {
    std::string name;
    std::string phoneNumber;
    std::string nickname;
    bool bookmarked;

    Contact(std::string n, std::string p, std::string nick)
        : name(n), phoneNumber(p), nickname(nick), bookmarked(false) {}
};