#include <iostream>
#include <math.h>

void circleCircumference()
{
    long double radius;

    std::cout << "\nEnter circle radius: ";
    std::cin >> radius;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter circle radius: ";
        std::cin >> radius;
    }

    std::cout << "\nResult: " << 2 * M_PI * radius << "\n\n";
}