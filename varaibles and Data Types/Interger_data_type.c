/*
Integer data type
-used to store integer values
-keyword: int
-size: 2 bytes or 4 bytes
-range: -32768 to 32767 or -2147483648 to 2147483647
-format specifier: %d
*/
//WAP to add two integers Number.
#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    result = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
