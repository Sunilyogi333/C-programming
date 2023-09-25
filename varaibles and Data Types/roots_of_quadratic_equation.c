#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float r1, r2;

    printf("Enter the value of a, b, and c:\n");
    scanf("%d%d%d", &a, &b, &c);

    float dis = b * b - 4 * a * c;

    if (dis >= 0)
    {
        // Calculate the roots only if the discriminant is non-negative
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots of the equation are %f and %f\n", r1, r2);
    }
    else
    {
        printf("The discriminant is negative, so there are no real roots.\n");
    }

    return 0;
}