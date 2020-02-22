#include <iostream>

void multiply()
{
    long double input1, input2;

    std::cout << "\nEnter first number to multiply: ";
    std::cin >> input1;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter first number to multiply: ";
        std::cin >> input1;
        err::cin.handle();
    }

    std::cout << "\nEnter second number to multiply: ";
    std::cin >> input2;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter second number to multiply: ";
        std::cin >> input2;
        err::cin.handle();
    }

    std::cout << "\nResult: " << input1 * input2 << "\n\n";
}