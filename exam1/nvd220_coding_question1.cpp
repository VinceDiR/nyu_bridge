#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the diamond: ";
    cin >> n;
    char letter = 'a';
    for(int i = -n+1; i < n; i++) {
        int abs_i = abs(i);
        for(int j = 0; j < abs_i; j++) {
            cout << " ";
        }

        if(i == -n+1 || i == n-1) {
            cout << char(letter+n-abs_i-1) << "\n";
            continue;
        }
        cout << char(letter+n-abs_i-1);
        for(int j = 0; j < 2*(n-abs_i)-3; j++) {
            cout << " ";
        }
        cout << char(letter+n-abs_i-1) << "\n";
    }
    return 0;
}
