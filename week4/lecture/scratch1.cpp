/* Take user input as integer and output string binary */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string binary;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    cout << binary << endl;

    return 0;
}