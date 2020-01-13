#include <iostream>
#include "types.h"
#include "calculators.h"
#include "coloredPrinting.h"

void calculators()
{
    int item;

    std::string items[] = {
        "BMI (Body Mass Index)",
        "Tax"};

    func functions[] = {
        &bmi,
        &tax};

    cyan("\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    yellow("\nEnter Item Number: ");
    std::cin >> item;

    while (item < 0 || item > 1)
    {
        red("\nInvalid Item Number!\n");
        yellow("\nEnter Item Number: ");
        std::cin >> item;
    }

    functions[item]();
}