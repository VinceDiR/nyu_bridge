#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    int hour, minute, duration;
    double minute_cost, total_cost;

    cout << "Please enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> day;
    cout << "Please enter the time the call started (24-hour format, HH MM): ";
    cin >> hour >> minute;
    cout << "Please enter the duration of the call in minutes: ";
    cin >> duration;

    if (day == "Sa" || day == "Su") {
        minute_cost = 0.15;
    } else {
        if (hour >= 8 && hour < 18) {
            minute_cost = 0.40;
        } else {
            minute_cost = 0.25;
        }
    }

    total_cost = minute_cost * duration;

    cout << "The cost of the call is: $" << total_cost << endl;

    return 0;
}
