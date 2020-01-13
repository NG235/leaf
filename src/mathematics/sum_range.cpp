#include <iostream>

void sumRange()
{
    long double start, end;
    long sum = 0;

    std::cout << "\nEnter start of range: ";
    std::cin >> start;

    std::cout << "\nEnter end of range: ";
    std::cin >> end;

    std::cout << "\nResult: " << (start + end) * (end / 2) << "\n\n";
}