#include <stdio.h>

void squareArea()
{
    float side;

    printf("\nEnter the length of one side: ");
    scanf("%f", &side);

    printf("\nResult: %f\n", side * side);
}