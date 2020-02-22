#include <iostream>

void subtract()
{
    long double input1, input2;

    std::cout << "\nEnter number to subtract from: ";
    std::cin >> input1;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter number to subtract from: ";
        std::cin >> input1;
    }

    leaf::cin.reset();

    std::cout << "\nEnter number to subtract: ";
    std::cin >> input2;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter number to subtract: ";
        std::cin >> input2;
    }

    std::cout << "\nResult: " << input1 - input2 << "\n\n";
}