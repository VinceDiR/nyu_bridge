#include <iostream>
using namespace std;

void print_shifted_triangle(int n, int m, char symbol);
void print_pine_tree(int n, char symbol);

int main()
{
    int triangles;
    char symbol;

    cout << "Enter the number of triangles: ";
    cin >> triangles;
    cout << "Enter the symbol for the tree: ";
    cin >> symbol;

    print_pine_tree(triangles, symbol);
    return 0;
}

void print_shifted_triangle(int n, int m, char symbol)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m + n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}

void print_pine_tree(int n, char symbol)
{
    for (int i = 2; i <= n + 1; i++)
    {
        print_shifted_triangle(i, 2 * (n + 1) - i, symbol);
    }
}
