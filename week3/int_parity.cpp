/* Take user's positive integer input and output the integer's parity. */
#include <iostream>
using namespace std;

int main() {
    int user_input;
    cout << "Enter a positive integer: ";
    cin >> user_input;
    if (user_input % 2 == 0) {
        cout << user_input << " is even." << endl;
    } else {
        cout << user_input << " is odd." << endl;
    }
    return 0;
}