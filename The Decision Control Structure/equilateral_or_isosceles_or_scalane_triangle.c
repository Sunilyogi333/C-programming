//WAP to check whether the triangle is equilateral, isosceles or scalane triangle.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c)
    {
        printf("Equilateral triangle.\n");
    }
    else if(a == b || b == c || c == a)
    {
        printf("Isosceles triangle.\n");
    }
    else
    {
        printf("Scalane triangle.\n");
    }
    return 0;
}