#include <iostream>
#include "types.h"
#include "converters.h"

void converters()
{
    int item;

    std::string items[] = {
        "Celsius to Fahrenheit",
        "Fahrenheit to Celsius"};

    func functions[] = {
        &celsiusFahrenheit,
        &fahrenheitCelsius};

    cyan("\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    yellow("\nEnter Item Number: ");
    std::cin >> item;

    while (std::cin.fail() || item < 0 || item > 1)
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        red("\nInvalid Item Number!\n");

        cyan("\nItems:\n");
        for (int i = 0; i <= 1; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        yellow("\nEnter Item Number: ");
        std::cin >> item;
    }

    functions[item]();
}