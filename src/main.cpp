#include <iostream>
#include "types.h"
#include "functions.h"

int main()
{
    int category;

    green("\nWelcome to Leaf!\n\n");

    std::string categories[] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    func functions[] = {
        &calculators,
        &converters,
        &mathematics};

    cyan("Categories:\n");
    for (int i = 0; i <= 2; ++i)
    {
        std::cout << i << "\t" << categories[i] << std::endl;
    }

    yellow("\nEnter Category Number: ");
    std::cin >> category;

    while (category < 0 || category > 2)
    {
        red("\nInvalid Category Number!\n");
        yellow("\nEnter Category Number: ");
        std::cin >> category;
    }

    functions[category]();

    return 0;
}