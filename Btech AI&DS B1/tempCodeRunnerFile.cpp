#include <iostream>

int main()
{
    int n;
    std::cout << "enter rows: ";
    std::cin >> n;

    int m;
    std::cout << "enter columns: ";
    std::cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            arr[i][j] = '$';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr[i][j];
            std::cout << "\t";
        }
        std::cout << "\n";
    }
}