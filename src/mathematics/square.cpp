#include <iostream>

void square()
{
    long double input;

    std::cout << "\nEnter number to square: ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to square: ";
        std::cin >> input;
    }

    std::cout << "\nResult: " << input * input << "\n\n";
}