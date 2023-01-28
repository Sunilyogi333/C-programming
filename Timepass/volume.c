#include <stdio.h>

int main()
{
    float r, h;

    printf("type the value of radius \n");
    scanf("%f", &r);

    printf("type the value of height \n");
    scanf("%f", &h);

    printf("Area of circle %f", 3.14 * r * r * h);
    return 0;
}