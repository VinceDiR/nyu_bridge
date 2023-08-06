#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the size of the Barn Door: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "#";
            }
            else if (i - 1 == j - 1 || n - i - 2 == j - 1)
            {
                std::cout << "$";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
