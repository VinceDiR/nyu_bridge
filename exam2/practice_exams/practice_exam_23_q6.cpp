#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Prototype
bool contains_digit(const string &str);

int main()
{
    vector<string> strings;
    string input;
    int only_lower_count = 0;

    cout << "Please enter a non-empty sequence of Strings.\n";
    cout << "Each string should be in a separate line and consists of only lowercase English letters and/or numerical characters. To indicate the end of the input, enter an empty string in one line.\n";

    while (true)
    {
        getline(cin, input);
        if (input.empty())
        {
            break;
        }
        if (contains_digit(input))
        {
            strings.push_back(input);
        }
        else
        {
            ++only_lower_count;
        }
    }

    for (const string &s : strings)
    {
        cout << s << endl;
    }

    cout << "Number of Strings in the input sequence that contain only lowercase English letters:  " << only_lower_count << endl;

    return 0;
}

// Function to check if a string contains a digit
bool contains_digit(const string &str)
{
    for (char c : str)
    {
        if (isdigit(c))
        {
            return true;
        }
    }
    return false;
}
