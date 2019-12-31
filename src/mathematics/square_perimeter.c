#include <stdio.h>

void squarePerimeter()
{
    float side;

    printf("\nEnter the length of one side: ");
    scanf("%f", &side);

    printf("\nResult: %f\n", side * 4);
}