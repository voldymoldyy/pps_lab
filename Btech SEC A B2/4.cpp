#include <iostream>

inline int findLargest(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    return max;
}

int main()
{
    int num1, num2, num3, num4;

    std::cout << "Enter four numbers: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    int largest = findLargest(num1, num2, num3, num4);

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
