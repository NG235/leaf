#include <iostream>

void cube()
{
    long double input;

    std::cout << "\nEnter number to cube: ";
    std::cin >> input;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to cude: ";
        std::cin >> input;
        err::cin.handle();
    }

    std::cout << "\nResult: " << input * input * input << "\n\n";
}