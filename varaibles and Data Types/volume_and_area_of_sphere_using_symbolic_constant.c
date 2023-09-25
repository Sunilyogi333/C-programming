//WAP to calculate volume and area of a sphere using symbolic constant.
#include<stdio.h>
#define PIE 3.14
int main()
{
    float radius,area,volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    area = 4*PIE*radius*radius;
    volume = (4/3)*PIE*radius*radius*radius;
    printf("Area of the sphere = %.2f\n", area);
    printf("Volume of the sphere = %.2f", volume);
    return 0;
}