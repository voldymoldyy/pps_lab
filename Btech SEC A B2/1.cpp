#include <iostream>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        std::cout << "the " << i << " element has " << count << " duplicates";
        std::cout << "\n";
        count = 0;
    }
}