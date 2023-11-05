#include <iostream>
#include <cmath>

float area(float r)
{
    float ar = 3.14 * r * r;
    return ar;
}

float area(float a, float b)
{
    float ar = a * b;
    return ar;
}

float area(int a, int b, int c)
{
    float s = (a + b + c) / 2;
    float ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return ar;
}

int main()
{
    std::string choose;
    std::cout << "enter the area u want to calculate: ";
    std::cin >> choose;

    if (choose == "circle")
    {
        float r;
        std::cout << "enter radius: ";
        std::cin >> r;

        std::cout << "area: " << area(r);
    }
    else if (choose == "rectangle")
    {
        float length;
        std::cout << "enter length: ";
        std::cin >> length;

        float breadth;
        std::cout << "enter breadth: ";
        std::cin >> breadth;

        std::cout << "area: " << area(length, breadth);
    }
    else if (choose == "triangle")
    {
        float a, b, c;
        std::cout << "enter side: ";
        std::cin >> a;

        std::cout << "enter side: ";
        std::cin >> b;

        std::cout << "enter side: ";
        std::cin >> c;

        std::cout << "area: " << area(a, b, c);
    }
    else
    {
        std::cout << "u suck";
    }
}