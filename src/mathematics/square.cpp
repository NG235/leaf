#include <iostream>

void square()
{
    long double input;

    std::cout << "\nEnter number to square: ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter number to square: ";
        std::cin >> input;
    }

    std::cout << "\nResult: " << input * input << "\n\n";
}