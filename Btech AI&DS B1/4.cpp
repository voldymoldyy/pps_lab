#include <iostream>
struct data
{
    int rollno;
    char name[100];
};

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    data d[n];
    data temp;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter Roll Number for Student " << (i + 1) << ": ";
        std::cin >> d[i].rollno;

        std::cout << "Enter Name for Student " << (i + 1) << ": ";
        std::cin.ignore();
        std::cin.getline(d[i].name, sizeof(d[i].name));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (d[i].rollno < d[j].rollno)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << "roll no: " << d[i].rollno;
        std::cout << "name: " << d[i].name;
        std::cout << "\n";
    }
}
