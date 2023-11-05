#include <iostream>

struct student
{
    int rollno;
    char name[100];
    char city[100];
};

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    student s[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter details for student " << i + 1 << ":"
                  << "\n";

        std::cout << "Roll Number: ";
        std::cin >> s[i].rollno;

        std::cout << "Name: ";
        std::cin >> s[i].name;

        std::cout << "City: ";
        std::cin >> s[i].city;
    }

    int input;
    std::cout << "Enter roll no of tudent : ";
    std::cout << "\n";
    std::cin >> input;

    for (int i = 0; i < n; i++)
    {
        if (s[i].rollno == input)
        {
            std::cout << s[i].rollno;
            std::cout << "\n";
            std::cout << s[i].name;
            std::cout << "\n";
            std::cout << s[i].city;
        }
    }
}
