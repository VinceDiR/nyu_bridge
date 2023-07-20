/* Takes user char input and outputs char data type */
#include <iostream>
using namespace std;

int main() {
    char user_input;
    cout << "Enter a character: ";
    cin >> user_input;

    if (user_input >= 'a' && user_input <= 'z') {
        cout << user_input << " is a lowercase letter." << endl;
    } else if (user_input >= 'A' && user_input <= 'Z') {
        cout << user_input << " is an uppercase letter." << endl;
    } else if (user_input >= '0' && user_input <= '9') {
        cout << user_input << " is a digit." << endl;
    } else {
        cout << user_input << " is a non-alphanumeric character." << endl;
    }
    return 0;
}