#include <stdio.h>

void celsiusFahrenheit()
{
    float input;

    printf("\nEnter temperature to convert (c): ");
    scanf("%f", &input);

    printf("\nResult (f): %.1f\n", (input * 9/5) + 32);
}