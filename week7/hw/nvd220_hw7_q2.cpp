#include <iostream>
#include <string>

using namespace std;

void count_letters(const string &str, int letter_counts[26]);
// Precondition: The input string may contain any characters.
// Postcondition: letter_counts will contain the count of each letter found in the input string, ignoring case, spaces, and punctuation.

bool are_anagrams(const string &str1, const string &str2);
// Precondition: The input strings may contain any characters.
// Postcondition: Returns true if the strings are anagrams of each other; otherwise, returns false.

int main()
{
    string str1, str2;

    cout << "Please enter the first string:\n";
    getline(cin, str1);

    cout << "Please enter the second string:\n";
    getline(cin, str2);

    if (are_anagrams(str1, str2))
    {
        cout << "The strings are anagrams.\n";
    }
    else
    {
        cout << "The strings are not anagrams.\n";
    }

    return 0;
}

void count_letters(const string &str, int letter_counts[26])
{
    for (char ch : str)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 'a' - 'A';
            }
            letter_counts[ch - 'a']++;
        }
    }
}

bool are_anagrams(const string &str1, const string &str2)
{
    int letter_counts1[26] = {0};
    int letter_counts2[26] = {0};

    count_letters(str1, letter_counts1);
    count_letters(str2, letter_counts2);

    for (int i = 0; i < 26; i++)
    {
        if (letter_counts1[i] != letter_counts2[i])
        {
            return false;
        }
    }

    return true;
}
