#include <iostream>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i];
        std::cout << "\n";
    }
}