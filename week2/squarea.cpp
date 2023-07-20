/* Program takes user input as radius of a cirlce (in float) and outputs */
# include <iostream>
# include <cmath>
using namespace std;

int main() {
    double radius, area;

    cout << "Please enter the radius:"<< endl;
    cin >> radius;

    // area = 3.14159 * (radius * radius);
    area = M_PI * pow(radius, 2); // using cmath library
    
    cout << "The area of a circle with radius " << radius << " is: " << area << endl;
    return 0;
}