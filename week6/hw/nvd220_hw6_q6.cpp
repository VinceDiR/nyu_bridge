#include <iostream>
#include <string>

using namespace std;

bool is_integer(string word);
string process_word(string word);
string replace_digits_in_line(string line);

int main()
{
    cout << "Please enter a line of text:" << endl;
    string line;
    getline(cin, line);

    string processed_line = replace_digits_in_line(line);
    cout << processed_line << endl;

    return 0;
}

bool is_integer(string word)
{
    for (char ch : word)
    {
        if (ch < '0' || ch > '9')
        {
            return false;
        }
    }
    return true;
}

string process_word(string word)
{
    if (is_integer(word))
    {
        for (char &ch : word)
        {
            ch = 'x';
        }
    }
    return word;
}

string replace_digits_in_line(string line)
{
    string processed_line = "";
    string word = "";
    for (char ch : line)
    {
        if (ch == ' ')
        {
            processed_line += process_word(word) + " ";
            word = "";
        }
        else
        {
            word += ch;
        }
    }
    processed_line += process_word(word);
    return processed_line;
}
