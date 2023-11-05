#include <iostream>
struct customer
{
    int billno;
    char code[100];
    char name[100];
    int amount;
};

int main()
{
    customer c[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "enter bill no: ";
        std::cin >> c[i].billno;
        std::cout << "\n";

        std::cout << "enter code: ";
        std::cin >> c[i].code;
        std::cout << "\n";

        std::cout << "enter name: ";
        std::cin >> c[i].name;
        std::cout << "\n";

        std::cout << "enter amount: ";
        std::cin >> c[i].amount;
        std::cout << "\n";
        if (c[i].amount > max)
        {
            max = c[i].amount;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (c[i].amount == max)
        {
            std::cout << c[i].billno;
            std::cout << "\n";
            std::cout << c[i].code;
            std::cout << "\n";
            std::cout << c[i].name;
            std::cout << "\n";
            std::cout << c[i].amount;
            std::cout << "\n";
        }
    }
}