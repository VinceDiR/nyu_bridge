/* Take user name as input string. Print it out in reverse. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Enter your name: ";
    getline(cin, user_name);

    for (int i = user_name.length() - 1; i >= 0; i--)
    {
        cout << user_name[i];
    }
    cout << endl;

    return 0;
}