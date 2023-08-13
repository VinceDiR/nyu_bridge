#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

const int PIN_SIZE = 5;
const int PIN = 12345;

// Function prototypes
void generate_mapping(int mapping[]);
int get_user_response(const int mapping[]);
bool check_pin(int response, const int mapping[]);

int main()
{
    srand(time(0));
    int mapping[10];
    generate_mapping(mapping);
    int response = get_user_response(mapping);
    if (check_pin(response, mapping))
    {
        cout << "Your PIN is correct\n";
    }
    else
    {
        cout << "Your PIN is not correct\n";
    }
    return 0;
}

// Function definitions
void generate_mapping(int mapping[])
{
    for (int i = 0; i < 10; i++)
    {
        mapping[i] = rand() % 3 + 1;
    }
}

int get_user_response(const int mapping[])
{
    cout << "Please enter your PIN according to the following mapping:\nPIN: 0 1 2 3 4 5 6 7 8 9\nNUM: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mapping[i] << " ";
    }
    cout << '\n';
    int response;
    cin >> response;
    return response;
}

bool check_pin(int response, const int mapping[])
{
    int pin_check = 0;
    for (int i = PIN_SIZE - 1; i >= 0; i--)
    {
        int digit = PIN / static_cast<int>(pow(10, i)) % 10;
        pin_check = pin_check * 10 + mapping[digit];
    }
    return response == pin_check;
}
