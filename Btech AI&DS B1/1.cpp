#include <iostream>

int main()
{
    char c[100];
    std::cout << "enter char: ";
    std::cin.getline(c, 100);

    char *ptr = &c[0];
    int count = 0;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        count++;
    }
    std::cout << "length of string: " << count;
    std::cout << "hi roni";
}