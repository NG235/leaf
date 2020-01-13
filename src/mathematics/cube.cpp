#include <iostream>

void cube()
{
    long double input;

    std::cout << "\nEnter number to cube: ";
    std::cin >> input;

    std::cout << "\nResult: " << input * input * input << "\n\n";
}