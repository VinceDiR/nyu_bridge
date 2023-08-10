#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int minutes;

    // Ask the user for the duration in minutes
    cout << "Enter the duration in minutes: ";
    cin >> minutes;
    int total_seconds = minutes * 60;

    // Start the timer countdown
    for (int i = total_seconds; i >= 0; --i)
    {
        cout << "\rTime left: " << i / 60 << " minutes " << i % 60 << " seconds" << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\nTime's up!\n";
    return 0;
}
