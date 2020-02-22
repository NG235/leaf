#include <iostream>

void cube()
{
    long double input;

    std::cout << "\nEnter number to cube: ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter number to cude: ";
        std::cin >> input;
    }

    std::cout << "\nResult: " << input * input * input << "\n\n";
}