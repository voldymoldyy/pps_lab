#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    float fact = 1;
    float sum = 0;
    float j;
    for (float i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        sum = sum + (j / fact);
        fact = 1;
    }
    std::cout << sum;
}