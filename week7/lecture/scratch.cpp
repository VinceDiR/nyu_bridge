# include <iostream>
using namespace std;

/* int main() {
    int x;
    int *px;
    x = 5;
    px = &x;

    cout << x << endl;
    cout << px << endl;
    cout << *px << endl;
    cout << &px << endl;

    return 0;
}
*/

int main() {
    int x = 5;
    int *px;
    px = &x;
    cout << *px << endl;
    cout << px << endl;
    cout << ++px << endl;

    return 0;
}