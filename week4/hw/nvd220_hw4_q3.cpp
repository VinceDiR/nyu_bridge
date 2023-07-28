#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int binary = 0, i = 0;
    while (number > 0)
    {
        int remainder = number % 2;
        number = number / 2;

        int power_of_10 = 1;
        for (int j = 0; j < i; j++)
        {
            power_of_10 *= 10;
        }

        binary += remainder * power_of_10;
        i++;
    }

    cout << "The binary representation of the number is: " << binary << endl;

    return 0;
}
