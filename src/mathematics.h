#include <stdio.h>

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
    char items[15][100] = {
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

    cyan("\nItems:\n");
    for (int i = 0; i <= 14; i += 1)
    {
        printf("%d \t %s \n", i, items[i]);
    }

    int item;
    yellow("\nEnter Item Number: ");
    scanf("%d", &item);

    while (item < 0 || item > 13)
    {
        red("\nInvalid Item Number!\n");
        printf("\nEnter Item Number: ");
        scanf("%d", &item);
    }

    if (item == 0)
    {
        add();
    }
    else if (item == 1)
    {
        circleArea();
    }
    else if (item == 2)
    {
        circleCircumference();
    }
    else if (item == 3)
    {
        cube();
    }
    else if (item == 4)
    {
        divide();
    }
    else if (item == 5)
    {
        factorial();
    }
    else if (item == 6)
    {
        multiply();
    }
    else if (item == 7)
    {
        percentage();
    }
    else if (item == 8)
    {
        rectangleArea();
    }
    else if (item == 9)
    {
        rectanglePerimeter();
    }
    else if (item == 10)
    {
        squareArea();
    }
    else if (item == 11)
    {
        squarePerimeter();
    }
    else if (item == 12)
    {
        square();
    }
    else if (item == 13)
    {
        subtract();
    }
    else if (item == 14)
    {
        sumRange();
    }
}