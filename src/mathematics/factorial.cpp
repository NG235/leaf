#include <iostream>

void factorial()
{
    long input, result = 1;

    std::cout << "\nEnter number to calculate factorial of: ";
    std::cin >> input;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to calculate factorial of: ";
        std::cin >> input;
        err::cin.handle();
    }

    for (long i = 1; i <= input; ++i)
    {
        result *= i;
    }

    std::cout << "\nResult: " << result << "\n\n";
}