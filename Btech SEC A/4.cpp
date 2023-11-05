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

    int number;
    std::cout << "enter number you want to add: ";
    std::cin >> number;

    std::cout << "addition: ";

    int add[m][n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = arr[i][j] + number;
            std::cout << add[i][j];
            std::cout << "\n";
        }
    }
    std::cout << "\n";

    std::cout << "transpose matrix: ";

    int transpose[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
            std::cout << transpose[i][j];
            std::cout << "\n";
        }
    }
}