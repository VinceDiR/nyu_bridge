/* Takes user input as integer and counts up to the number. */
#include <iostream>
using namespace std;

int main()
{
    int counter = 1;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (counter <= n)
    {
        cout << counter << endl;
        counter++;
    }
    return 0;
} 