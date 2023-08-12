#include <iostream>
using namespace std;

int main()
{
    int x = 100;
    int *ptr = &x;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}