#include <iostream>

void multiply()
{
    long double input1, input2;

    std::cout << "\nEnter first number to multiply: ";
    std::cin >> input1;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter first number to multiply: ";
        std::cin >> input1;
    }

    std::cout << "\nEnter second number to multiply: ";
    std::cin >> input2;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter second number to multiply: ";
        std::cin >> input2;
    }

    std::cout << "\nResult: " << input1 * input2 << "\n\n";
}