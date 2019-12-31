#include <stdio.h>
#include <math.h>

void circleArea()
{
    float radius;

    printf("\nEnter circle radius: ");
    scanf("%f", &radius);

    printf("\nResult: %f\n", M_PI * (radius * radius));
}