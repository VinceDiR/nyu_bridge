/* Takes user integer input and outputs the absolute value of the user_input */
#include <iostream>
using namespace std;

int main() {
    int user_input, absolute_value;
    cout << "Enter an integer: ";
    cin >> user_input;
    absolute_value = user_input;
    if (absolute_value < 0) {
        absolute_value *= -1;
    }
    cout << "|"<< user_input << "| = " << absolute_value << endl;
    return 0;
}