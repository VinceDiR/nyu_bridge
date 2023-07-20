/* This program takes the user's name as input and says hello */

#include <iostream>

int main() {
    std::string name;

    std::cout << "Please enter your name:" << std::endl;
    std::cin >> name;


    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
