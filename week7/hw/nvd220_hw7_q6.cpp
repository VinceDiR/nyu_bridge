#include <iostream>
#include <string>

void search_number(int num, const int arr[], int size)
{
    bool found = false;
    std::cout << num << " shows in lines";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            std::cout << " " << i + 1 << ",";
            found = true;
        }
    }
    if (!found)
    {
        std::cout << " nowhere.";
    }
    std::cout << "\n";
}

void main1()
{
    int arr[1000];
    int size = 0;
    int input;

    std::cout << "Please enter a sequence of positive integers, each in a separate line.\n";
    std::cout << "End your input by typing -1.\n";

    while (true)
    {
        std::cin >> input;
        if (input == -1)
            break;
        arr[size++] = input;
    }

    int num;
    std::cout << "Please enter a number you want to search: ";
    std::cin >> num;

    search_number(num, arr, size);
}

#include <iostream>
#include <vector>
#include <string>

void search_number(int num, const std::vector<int> &vec)
{
    bool found = false;
    std::cout << num << " shows in lines";
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == num)
        {
            std::cout << " " << i + 1 << ",";
            found = true;
        }
    }
    if (!found)
    {
        std::cout << " nowhere.";
    }
    std::cout << "\n";
}

void main2()
{
    std::vector<int> vec;
    int input;

    std::cout << "Please enter a sequence of positive integers, each in a separate line.\n";
    std::cout << "End your input by typing -1.\n";

    while (true)
    {
        std::cin >> input;
        if (input == -1)
            break;
        vec.push_back(input);
    }

    int num;
    std::cout << "Please enter a number you want to search: ";
    std::cin >> num;

    search_number(num, vec);
}

int main()
{
    std::cout << "Version without vector:\n";
    main1();
    std::cout << "Version with vector:\n";
    main2();
    return 0;
}
