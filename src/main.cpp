#include <iostream>
#include "err.h"
#include "types.h"
#include "functions.h"

using std::string;

int main()
{
    int category;

    cpg::green("\nWelcome to Leaf!\n\n");

    string categories[] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    func functions[] = {
        &calculators,
        &converters,
        &mathematics};

    cpg::cyan("Categories:\n");
    for (int i = 0; i <= 2; ++i)
    {
        std::cout << i << "\t" << categories[i] << std::endl;
    }

    cpg::yellow("\nEnter Category Number: ");
    std::cin >> category;

    err::cin.handle();

    while (std::cin.fail() || category < 0 || category > 2)
    {
        err::cin.handle();

        cpg::red("\nInvalid Category Number!\n");

        cpg::cyan("\nCategories:\n");
        for (int i = 0; i <= 2; ++i)
        {
            std::cout << i << "\t" << categories[i] << std::endl;
        }

        cpg::yellow("\nEnter Category Number: ");
        std::cin >> category;
        
        err::cin.handle();
    }

    functions[category]();

    return 0;
}
