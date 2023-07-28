#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Select input method:\n";
    cout << "1. Enter the length of the sequence first.\n";
    cout << "2. Keep entering numbers until -1 is entered.\n";

    int choice;
    cin >> choice;

    double product = 1.0;
    int length = 0, num;

    if (choice == 1)
    {
        cout << "Please enter the length of the sequence: ";
        cin >> length;
        for (int i = 0; i < length; ++i)
        {
            cout << "Please enter your sequence: ";
            cin >> num;
            product *= num;
        }
    }
    else if (choice == 2)
    {
        cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:\n";
        while (true)
        {
            cin >> num;
            if (num == -1)
            {
                break;
            }
            product *= num;
            length++;
        }
    }
    else
    {
        cout << "Invalid choice.\n";
        return -1;
    }

    double geometric_mean = pow(product, 1.0 / length);
    cout << "The geometric mean is: " << geometric_mean << endl;

    return 0;
}
