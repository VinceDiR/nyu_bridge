#include <iostream>
using namespace std;

int main()
{
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;

    double real_num, rounded_num;
    int round_method;

    cout << "Please enter a Real number:" << endl;
    cin >> real_num;

    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> round_method;

    switch (round_method)
    {
    case FLOOR_ROUND:
        rounded_num = (int)real_num;
        if (real_num < 0 && real_num - (int)real_num != 0)
        {
            rounded_num--;
        }
        break;
    case CEILING_ROUND:
        rounded_num = (int)real_num;
        if (real_num > 0 && real_num - (int)real_num != 0)
        {
            rounded_num++;
        }
        break;
    case ROUND:
        if (real_num >= 0)
        {
            rounded_num = (int)(real_num + 0.5);
        }
        else
        {
            rounded_num = (int)(real_num - 0.5);
        }
        break;
    default:
        cout << "Invalid rounding method" << endl;
        return 0;
    }
    cout << "The rounded number is: " << rounded_num << endl;
    return 0;
}
