#include <iostream>
#include "types.h"
#include "mathematics.h"

using std::string;

void mathematics()
{
    int item;
    
    string items[] = {
        "Add two Numbers",
        "Area of a Circle",
        "Circumference of a Circle",
        "Cube Number",
        "Divide Number",
        "Calculate Factorial",
        "Multiply two Numbers",
        "Get Percentage Ammount",
        "Area of a Rectangle",
        "Perimeter of a Rectangle",
        "Area of a Square",
        "Perimeter of a Square",
        "Square Number",
        "Subtract two Numbers",
        "Calculate sum of Numbers in Range"};

    func functions[] = {
        &add,
        &circleArea,
        &circleCircumference,
        &cube,
        &divide,
        &factorial,
        &multiply,
        &percentage,
        &rectangleArea,
        &rectanglePerimeter,
        &squareArea,
        &squarePerimeter,
        &square,
        &subtract,
        &sumRange};

    cpg::cyan("\nItems:\n");
    for (int i = 0; i <= 14; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    cpg::yellow("\nEnter Item Number: ");
    std::cin >> item;

    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    while (std::cin.fail() || item < 0 || item > 14)
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        cpg::red("\nInvalid Item Number!\n");

        cpg::cyan("\nItems:\n");
        for (int i = 0; i <= 14; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        cpg::yellow("\nEnter Item Number: ");
        std::cin >> item;

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }

    functions[item]();
}