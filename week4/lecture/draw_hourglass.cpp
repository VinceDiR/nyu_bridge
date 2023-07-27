/* Take user input as integer and draws an triangle equal to (2*n - 1) many lines */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    // Draw upper part of the hourglass
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // Draw lower part of the hourglass
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
