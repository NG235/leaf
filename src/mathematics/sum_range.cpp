#include <iostream>

void sumRange()
{
    long double start, end;
    long sum = 0;

    std::cout << "\nEnter start of range: ";
    std::cin >> start;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter start of range: ";
        std::cin >> start;
        err::cin.handle();
    }

    std::cout << "\nEnter end of range: ";
    std::cin >> end;

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter end of range: ";
        std::cin >> end;
        err::cin.handle();
    }

    std::cout << "\nResult: " << (start + end) * (end / 2) << "\n\n";
}