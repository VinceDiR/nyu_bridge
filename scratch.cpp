#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive integer:";
    cin >> n;

    if (n <= 0)
    {
        cout << "You entered a non-positive number. Please enter a positive integer." << endl;
        return 1; // exit with error code
    }

    // First half of the shape
    for (int i = 1; i <= 2 * n - 1; ++i)
    {
        // Printing spaces
        for (int j = 1; j <= 2 * n - i; ++j)
        {
            cout << " ";
        }

        // Printing asterisks
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Second half of the shape
    for (int i = 2 * n - 2; i >= 1; --i)
    {
        // Printing spaces
        for (int j = 1; j <= 2 * n - i; ++j)
        {
            cout << " ";
        }

        // Printing asterisks
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
