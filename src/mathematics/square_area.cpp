#include <iostream>

void squareArea()
{
    long double side;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter the length of one side: ";
        std::cin >> side;
    }

    std::cout << "\nResult" << side * side << "\n\n";
}