#include <iostream>

void percentage()
{
    long double whole, percentage;

    std::cout << "\nEnter whole ammount: ";
    std::cin >> whole;

    std::cout << "\nEnter percentage of whole ammount: ";
    std::cin >> percentage;

    std::cout << "\nResult: " << (whole / 100) * percentage << "\n\n";
}