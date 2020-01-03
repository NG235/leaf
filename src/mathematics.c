#include <stdio.h>
#include "types.h"
#include "mathematics.h"

void mathematics()
{
    char items[][100] = {
        "Add two Numbers",
        "Area of a Cirlce",
        "Circumference of a Circle",
        "Cube Number",
        "Divide two Numbers",
        "Caclulate Factorial",
        "Multiply two Numbers",
        "Get Percentage Ammount",
        "Area of a Rectangle",
        "Perimter of a Rectangle",
        "Area of a Square",
        "Perimeter of a Square",
        "Square Number",
        "Subtract two Numbers",
        "Calculate sum of Numbers in Range"};

    func functions[sizeof(items)] = {
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

    cyan("\nItems:\n");
    for (int i = 0; i <= 14; i += 1)
    {
        printf("%d \t %s \n", i, items[i]);
    }

    int item;
    yellow("\nEnter Item Number: ");
    scanf("%d", &item);

    while (item < 0 || item > sizeof(items))
    {
        red("\nInvalid Item Number!\n");
        printf("\nEnter Item Number: ");
        scanf("%d", &item);
    }

    functions[item]();
}