/* This program reads two integers from the user and prints their sum */

#include <iostream>

int main() {
    int num1, num2, sum;

    std::cout << "Please enter two numbers separated by a space:" << std::endl;
    std::cin >> num1 >> num2;

    sum = num1 + num2;

    std::cout << num1 << " + " << num2 << " = " << sum << std::endl;

    return 0;
}
