#include <stdio.h>
#include <math.h>

void circleCircumference()
{
    float radius;

    printf("\nEnter circle radius: ");
    scanf("%f", &radius);

    printf("\nResult: %f\n", 2 * M_PI * radius);
}