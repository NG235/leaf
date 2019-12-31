#include <stdio.h>

void divide()
{
    float input1, input2;

    printf("\nEnter starting number: ");
    scanf("%f", &input1);

    printf("\nEnter number to divide by: ");
    scanf("%f", &input2);

    printf("\nResult: %f\n", input1 / input2);
}