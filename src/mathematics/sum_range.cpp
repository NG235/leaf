#include <iostream>

void sumRange()
{
    long double start, end;
    long sum = 0;

    std::cout << "\nEnter start of range: ";
    std::cin >> start;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter start of range: ";
        std::cin >> start;
    }

    std::cout << "\nEnter end of range: ";
    std::cin >> end;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter end of range: ";
        std::cin >> end;
    }

    std::cout << "\nResult: " << (start + end) * (end / 2) << "\n\n";
}