#include <stdio.h>

void rectanglePerimeter()
{
    long double side1, side2;

    printf("\nEnter the length of one side: ");
    scanf("%Lf", &side1);

    printf("\nEnter the length of another side: ");
    scanf("%Lf", &side2);

    printf("\nResult: %.2Lf\n", (side1 * 2) + (side2 * 2));
}