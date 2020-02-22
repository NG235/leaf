#include <iostream>

void fahrenheitCelsius()
{
    float input;

    std::cout << "\nEnter temperature to convert (f): ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter temperature to convert (f): ";
        std::cin >> input;
    }

    std::cout << "\nResult (c): " << (input - 32) * 5/9 << "\n\n";
}