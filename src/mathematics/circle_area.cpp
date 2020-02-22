#include <iostream>
#include <math.h>

void circleArea()
{
    long double radius;

    std::cout << "\nEnter circle radius: ";
    std::cin >> radius;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter circle radius: ";
        std::cin >> radius;
        err::cin.handle();
    }

    std::cout << "\nResult: " << M_PI * (radius * radius) << "\n\n";
}