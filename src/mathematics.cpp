#include <iostream>
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

    leaf::cpg(leaf::cyan, "\nItems:\n");
    for (int i = 0; i <= 14; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    leaf::cpg(leaf::yellow, "\nEnter Item Number: ");
    std::cin >> item;

    while (std::cin.fail() || item < 0 || item > 14)
    {
        leaf::cin.reset();

        leaf::cpg(leaf::red, "\nInvalid Item Number!\n");

        leaf::cpg(leaf::cyan, "\nItems:\n");
        for (int i = 0; i <= 14; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        leaf::cpg(leaf::yellow, "\nEnter Item Number: ");
        std::cin >> item;
    }

    leaf::cin.reset();
    functions[item]();
}