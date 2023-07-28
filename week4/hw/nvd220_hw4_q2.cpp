#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter decimal number: ";
    cin >> num;

    string roman = "";

    while (num >= 1000)
    {
        roman += 'M';
        num -= 1000;
    }

    if (num >= 500)
    {
        roman += 'D';
        num -= 500;
    }

    for (int i = 0; i < 4 && num >= 100; i++)
    {
        roman += 'C';
        num -= 100;
    }

    if (num >= 50)
    {
        roman += 'L';
        num -= 50;
    }

    for (int i = 0; i < 4 && num >= 10; i++)
    {
        roman += 'X';
        num -= 10;
    }

    if (num >= 5)
    {
        roman += 'V';
        num -= 5;
    }

    for (int i = 0; i < 4 && num >= 1; i++)
    {
        roman += 'I';
        num -= 1;
    }

    cout << roman << endl;
    return 0;
}
