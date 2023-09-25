/*
Float data type
-used for storing decimal numbers
-keyword: float
-size: 4 bytes
-range: -3.4 * 10^38 to 3.4 * 10^38
-format specifier: %f
*/
//WAP for devision of two float numbers.
#include<stdio.h>
int main()
{
    float num1, num2, result;
    printf("Enter the first number\n");
    scanf("%f", &num1);
    printf("Enter the second number\n");
    scanf("%f", &num2);
    result = num1 / num2;
    printf("The division of %f and %f is %f\n", num1, num2, result);
    return 0;
}