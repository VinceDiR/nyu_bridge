#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 100; i++) 
    {
        v.push_back(i * 100);
    }
    for (int i: v) // Ranged for loop syntax
    {
        cout << v[i] << endl;
    }
}