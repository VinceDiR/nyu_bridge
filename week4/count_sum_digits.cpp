/* Reads a positive integer input and prints out the number o digits and their sum. */
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, count = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}