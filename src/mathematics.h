#include <stdio.h>
#include "types.h"

#include "mathematics/add.c"
#include "mathematics/circle_area.c"
#include "mathematics/circle_circumference.c"
#include "mathematics/cube.c"
#include "mathematics/divide.c"
#include "mathematics/factorial.c"
#include "mathematics/multiply.c"
#include "mathematics/percentage.c"
#include "mathematics/rectangle_area.c"
#include "mathematics/rectangle_perimeter.c"
#include "mathematics/square_area.c"
#include "mathematics/square_perimeter.c"
#include "mathematics/square.c"
#include "mathematics/subtract.c"
#include "mathematics/sum_range.c"

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