#include <iostream>

void fahrenheitCelsius()
{
    float input;

    std::cout << "\nEnter temperature to convert (f): ";
    std::cin >> input;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter temperature to convert (f): ";
        std::cin >> input;
    }

    std::cout << "\nResult (c): " << (input - 32) * 5/9 << "\n\n";
}