#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    int hour, minute, duration;
    double costPerMinute, totalCost;

    cout << "Please enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> day;
    cout << "Please enter the time the call started (24-hour format, HH MM): ";
    cin >> hour >> minute;
    cout << "Please enter the duration of the call in minutes: ";
    cin >> duration;

    if (day == "Sa" || day == "Su") {
        // Weekend rate
        costPerMinute = 0.15;
    } else {
        // Weekday rate depends on the time
        if (hour >= 8 && hour < 18) {
            // Daytime rate
            costPerMinute = 0.40;
        } else {
            // Off-hours rate
            costPerMinute = 0.25;
        }
    }

    totalCost = costPerMinute * duration;

    cout << "The cost of the call is: $" << totalCost << endl;

    return 0;
}
