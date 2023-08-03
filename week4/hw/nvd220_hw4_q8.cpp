#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int target = (rand() % 100) + 1;
    int guesses = 5;
    int lower_bound = 1, upper_bound = 100;
    int guess;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    while (guesses > 0)
    {
        cout << "Range: [" << lower_bound << ", " << upper_bound << "], Number of guesses left: " << guesses << endl;
        cout << "Your guess: ";
        cin >> guess;

        if (guess == target)
        {
            cout << "Congrats! You guessed my number in " << 5 - guesses + 1 << " guesses." << endl;
            return 0;
        }
        else if (guess < target)
        {
            cout << "Wrong! My number is bigger." << endl;
            lower_bound = guess + 1;
        }
        else if (guess > target)
        {
            cout << "Wrong! My number is smaller." << endl;
            upper_bound = guess - 1;
        }
        guesses--;
    }

    cout << "Out of guesses! My number is " << target << endl;
    return 0;
}
