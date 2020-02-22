#include <iostream>
#include "types.h"
#include "converters.h"

using std::string;

void converters()
{
    int item;

    string items[] = {
        "Celsius to Fahrenheit",
        "Fahrenheit to Celsius"};

    func functions[] = {
        &celsiusFahrenheit,
        &fahrenheitCelsius};

    cpg::cyan("\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    cpg::yellow("\nEnter Item Number: ");
    std::cin >> item;
    err::cin.handle();

    while (std::cin.fail() || item < 0 || item > 1)
    {
        err::cin.handle();

        cpg::red("\nInvalid Item Number!\n");

        cpg::cyan("\nItems:\n");
        for (int i = 0; i <= 1; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        cpg::yellow("\nEnter Item Number: ");
        std::cin >> item;
        err::cin.handle();
    }

    functions[item]();
}