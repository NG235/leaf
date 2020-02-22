#include <iostream>

void squarePerimeter()
{
    long double side;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter the length of one side: ";
        std::cin >> side;
        err::cin.handle();
    }

    std::cout << "\nResult: " << side * 4 << "\n\n";
}