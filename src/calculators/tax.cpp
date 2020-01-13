#include <iostream>

void tax()
{
    int income;
    float rate, tax;

    std::cout << "\nEnter your taxable income: $";
    std::cin >> income;

    std::cout << "\nEnter your tax rate: ";
    std::cin >> rate;

    tax = (income / 100) * rate;

    std::cout << "\nYou will pay the following in tax: " << tax << "\n\n";
}