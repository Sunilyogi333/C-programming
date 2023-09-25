/*
Double data type
-used for storing decimal numbers
-keyword: double
-size: 8 bytes
-range: -1.7 * 10^308 to 1.7 * 10^308
-format specifier: %lf
*/
//WAP for devision of two double numbers.
#include<stdio.h>
int main()
{
    double num1, num2, result;
    printf("Enter the first number\n");
    scanf("%lf", &num1);
    printf("Enter the second number\n");
    scanf("%lf", &num2);
    result = num1 / num2;
    printf("The division of %lf and %lf is %lf\n", num1, num2, result);
    return 0;
}