#include <stdio.h>

void squarePerimeter()
{
    long double side;

    printf("\nEnter the length of one side: ");
    scanf("%Lf", &side);

    printf("\nResult: %.2Lf\n", side * 4);
}