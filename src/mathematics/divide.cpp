#include <iostream>

void divide()
{
    long double input1, input2;

    std::cout << "\nEnter whole number: ";
    std::cin >> input1;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter whole number: ";
        std::cin >> input1;
    }

    leaf::cin.reset();

    std::cout << "\nEnter number to divide by: ";
    std::cin >> input2;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter number to divide by: ";
        std::cin >> input2;
    }

    std::cout << "\nResult: " << input1 / input2 << "\n\n";
}