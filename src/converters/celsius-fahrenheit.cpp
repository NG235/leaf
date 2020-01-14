#include <iostream>

void celsiusFahrenheit()
{
    float input;

    std::cout << "\nEnter temperature to convert (c): ";
    std::cin >> input;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter temperature to convert (c): ";
        std::cin >> input;
    }

    std::cout << "\nResult (f): " << (input * 9/5) + 32 << "\n\n";
}