#include <stdio.h>

void multiply()
{
    long double input1, input2;

    printf("\nEnter first number to multiply: ");
    scanf("%Lf", &input1);

    printf("\nEnter second number to multiply: ");
    scanf("%Lf", &input2);

    printf("\nResult: %.2Lf\n", input1 * input2);
}