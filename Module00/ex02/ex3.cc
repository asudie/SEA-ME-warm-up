#include <iostream>
#include <string>

void toUpperCase(std::string& str) {
    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        }
    }
}

void toLowerCase(std::string& str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: ./convert {command} {string}" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    std::string str = argv[2];

    if (command == "up") {
        toUpperCase(str);
    } else if (command == "down") {
        toLowerCase(str);
    } else {
        std::cerr << "Invalid command. Use 'up' or 'down'." << std::endl;
        return 1;
    }

    std::cout << str << std::endl;
    return 0;
}
