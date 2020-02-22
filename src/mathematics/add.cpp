#include <iostream>

void add()
{
    long double input1, input2;

    std::cout << "\nEnter first number to add: ";
    std::cin >> input1;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter first number to add: ";
        std::cin >> input1;
        err::cin.handle();
    }

    std::cout << "\nEnter second number to add: ";
    std::cin >> input2;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter second number to add: ";
        std::cin >> input2;
        err::cin.handle();
    }

    std::cout << "\nResults: " << input1 + input2 << "\n\n";
}