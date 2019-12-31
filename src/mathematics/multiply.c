#include <stdio.h>

void multiply()
{
    float input1, input2;

    printf("\nEnter first number to multiply: ");
    scanf("%f", &input1);

    printf("\nEnter second number to multiply: ");
    scanf("%f", &input2);

    printf("\nResult: %f\n", input1 * input2);
}