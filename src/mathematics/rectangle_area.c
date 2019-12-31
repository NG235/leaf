#include <stdio.h>

void rectangleArea()
{
    float side1, side2;

    printf("\nEnter the length of one side: ");
    scanf("%f", &side1);

    printf("\nEnter the length of another side: ");
    scanf("%f", &side2);

    printf("\nResult: %f\n", side1 * side2);
}