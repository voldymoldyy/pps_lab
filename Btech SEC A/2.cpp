#include <iostream>
#include <cstring>

int main()
{
    std::string s;
    std::cout << "enter string: ";
    std::cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        std::cout << s[i];
    }
}