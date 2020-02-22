#include <iostream>
#include "types.h"
#include "calculators.h"
#include "cpg.h"

using std::string;

void calculators()
{
    int item;

    string items[] = {
        "BMI (Body Mass Index)",
        "Tax"};
        
    func functions[] = {
        &bmi,
        &tax};

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