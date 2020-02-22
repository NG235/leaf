#include <iostream>

void factorial()
{
    long input, result = 1;

    std::cout << "\nEnter number to calculate factorial of: ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to calculate factorial of: ";
        std::cin >> input;
    }

    for (long i = 1; i <= input; ++i)
    {
        result *= i;
    }

    std::cout << "\nResult: " << result << "\n\n";
}