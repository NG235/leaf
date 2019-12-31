#include <stdio.h>

void fahrenheitCelsius()
{
    float input;

    printf("\nEnter temperature to convert (f): ");
    scanf("%f", &input);

    printf("\nResult (c): %.1f\n", (input - 32) * (5/9));
}