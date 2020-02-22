#include <iostream>
#include <math.h>

void circleArea()
{
    long double radius;

    std::cout << "\nEnter circle radius: ";
    std::cin >> radius;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter circle radius: ";
        std::cin >> radius;
    }

    std::cout << "\nResult: " << M_PI * (radius * radius) << "\n\n";
}