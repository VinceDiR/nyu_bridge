#include <iostream>
using namespace std;

int main() {
    int width, height, totalLength;

    cout << "Hello!\n";
    cout << "This program calculates the total length of fencing needs to enclose the sides of a rectangular area.\n";
    cout << "Press return after entering a number.\n";

    cout << "Enter the width of the area:\n";
    cin >> width;
    cout << "Enter the height of the area:\n";
    cin >> height;

    totalLength = 2 * width + 2 * height;

    cout << "If you have an area with ";
    cout << width;
    cout << " width and ";
    cout << height;
    cout << " height, then you need \n";
    cout << totalLength;
    cout << " feet of fencing to enclose the area.\n";
    cout << "Good-bye!\n";

    return 0;

}