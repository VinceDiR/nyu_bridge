/* Takes user input as integer and counts up to the number. */
#include <iostream>
using namespace std;

int main()
{
    int counter;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (counter = 1; counter <= n; counter++)
    {
        cout << counter << endl;
    }
    return 0;
}