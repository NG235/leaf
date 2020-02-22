#include <iostream>

void celsiusFahrenheit()
{
    float input;

    std::cout << "\nEnter temperature to convert (c): ";
    std::cin >> input;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter temperature to convert (c): ";
        std::cin >> input;
    }

    std::cout << "\nResult (f): " << (input * 9/5) + 32 << "\n\n";
}