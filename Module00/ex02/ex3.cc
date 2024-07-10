#include <iostream>
#include <string>

void toUpperCase(std::string& str) {
    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        }
    }
    std::cout << str << " ";
}

void toLowerCase(std::string& str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
    }
    std::cout << str << " ";;
}

int main(int argc, char* argv[]) {

    std::string command = argv[1];
    for(int i = 2; argv[i] != NULL; i++)
    {
        if (command == "up") {
            std::string str = argv[i];
            toUpperCase(str);
         } else if (command == "down") {
            std::string str = argv[i];
          toLowerCase(str);
         } else {
         std::cerr << "Invalid command. Use 'up' or 'down'." << std::endl;
        return 1;
    }
    }

    std::cout << std::endl;
    return 0;
}
