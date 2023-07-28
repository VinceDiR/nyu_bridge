#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Using While Loop:" << endl;
    int count = 0;
    int number = 2;
    while (count < n)
    {
        cout << number << endl;
        number += 2;
        count++;
    }

    cout << "Using For Loop:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i * 2 << endl;
    }

    return 0;
}
