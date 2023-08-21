#include <iostream>
#include <string>

using namespace std;

int count_words(const string &str);
// Precondition: Input string consists of letters, whitespace, commas, and periods.
// Postcondition: Returns the number of words in the input string.

void count_letters(const string &str, int letter_counts[26]);
// Precondition: Input string consists of letters, whitespace, commas, and periods.
// Postcondition: letter_counts will contain the count of each letter found in the input string.

int main()
{
    string line;

    cout << "Please enter a line of text:\n";
    getline(cin, line);

    int words = count_words(line);
    cout << words << "\twords\n";

    int letter_counts[26] = {0};
    count_letters(line, letter_counts);

    for (int i = 0; i < 26; i++)
    {
        if (letter_counts[i] > 0)
        {
            cout << letter_counts[i] << "\t" << static_cast<char>('a' + i) << '\n';
        }
    }

    return 0;
}

int count_words(const string &str)
{
    int count = 0;
    bool in_word = false;

    for (char ch : str)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (!in_word)
            {
                in_word = true;
                count++;
            }
        }
        else if (ch == ' ' || ch == '.' || ch == ',')
        {
            in_word = false;
        }
    }

    return count;
}

void count_letters(const string &str, int letter_counts[26])
{
    for (char ch : str)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            ch = tolower(ch);
            letter_counts[ch - 'a']++;
        }
    }
}
