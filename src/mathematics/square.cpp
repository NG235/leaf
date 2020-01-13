#include <iostream>

void square()
{
    long double input;

    std::cout << "\nEnter number to square: ";
    std::cin >> input;

    std::cout << "\nResult: " << input * input << "\n\n";
}