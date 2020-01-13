#include <iostream>
#include <math.h>

void circleCircumference()
{
    long double radius;

    std::cout << "\nEnter circle radius: ";
    std::cin >> radius;

    std::cout << "\nResult: " << 2 * M_PI * radius << "\n\n";
}