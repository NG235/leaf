#include <stdio.h>

void bmi()
{
    float weight, height;

    printf("\nEnter weight (kg): ");
    scanf("%f", &weight);

    printf("\nEnter height (m): ");
    scanf("%f", &height);

    printf("\nResult: %.1f\n", weight / (height * height));
}