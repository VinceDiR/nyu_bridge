/* Takes user input as 3 strings and prints the one that comes first in alphabetical order. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3;
    cout << "Enter 3 words separated by a space: ";
    cin >> str1 >> str2 >> str3;

    if (str1 < str2 && str1 < str3)
    {
        cout << str1 << endl;
    }
    else if (str2 < str1 && str2 < str3)
    {
        cout << str2 << endl;
    }
    else
    {
        cout << str3 << endl;
    }

    return 0;
}