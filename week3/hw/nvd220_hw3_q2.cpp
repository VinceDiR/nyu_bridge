#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int graduation_year, current_year;

    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Please enter your graduation year: ";
    cin >> graduation_year;
    
    cout << "Please enter current year: ";
    cin >> current_year;

    string status;
    int year_difference = graduation_year - current_year;
    if (year_difference > 4) {
        status = "not in college yet.";
    } else if (year_difference == 4) {
        status = "a Freshman.";
    } else if (year_difference == 3) {
        status = "a Sophomore.";
    } else if (year_difference == 2) {
        status = "a Junior.";
    } else if (year_difference == 1) {
        status = "a Senior.";
    } else {
        status = "Graduated.";
    }
    
    cout << name << ", you are " << status << endl;

    return 0;
}
