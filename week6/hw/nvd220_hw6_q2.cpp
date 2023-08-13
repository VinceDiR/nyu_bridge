#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str);

int main()
{
    string word;

    cout << "Please enter a word: ";
    cin >> word;

    if (is_palindrome(word))
    {
        cout << word << " is a palindrome\n";
    }
    else
    {
        cout << word << " is not a palindrome\n";
    }

    return 0;
}

bool is_palindrome(string str)
{
    int length = str.length();

    for (int i = 0; i < length / 2; ++i)
    {
        if (str[i] != str[length - i - 1])
        {
            return false;
        }
    }

    return true;
}
