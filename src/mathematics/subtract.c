#include <stdio.h>

void subtract()
{
    float input1, input2;

    printf("\nEnter starting number: ");
    scanf("%f", &input1);

    printf("\nEnter number to subtract: ");
    scanf("%f", &input2);

    printf("\nResult: %f\n", input1 - input2);
}