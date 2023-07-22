#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double POUND_TO_KG = 0.453592;
    const double INCH_TO_METER = 0.0254;

    double weight_lbs, height_inches;
    double weight_kg, height_meters;
    double bmi;

    cout << "Please enter weight (in pounds): ";
    cin >> weight_lbs;

    cout << "Please enter height (in inches): ";
    cin >> height_inches;

    weight_kg = weight_lbs * POUND_TO_KG;
    height_meters = height_inches * INCH_TO_METER;

    bmi = weight_kg / (height_meters * height_meters);

    string status;
    if (bmi < 18.5)
    {
        status = "Underweight";
    }
    else if (bmi < 25)
    {
        status = "Normal";
    }
    else if (bmi < 30)
    {
        status = "Overweight";
    }
    else
    {
        status = "Obese";
    }

    cout << "The weight status is: " << status << endl;

    return 0;
}
