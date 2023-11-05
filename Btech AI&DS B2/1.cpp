#include <iostream>

int main()
{
    int a;
    std::cout << "enter a: ";
    std::cin >> a;

    int b;
    std::cout << "enter b: ";
    std::cin >> b;

    std::cout << "before swapping: " << a << b;
    std::cout << "\n";

    int *ptr = &a;
    int *ptr1 = &b;

    int temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;

    std::cout << "after swapping: " << a << b;
}