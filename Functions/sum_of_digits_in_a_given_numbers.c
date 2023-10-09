/*
WAP to find the sum of digits in a given number using function. 
Display the result in main function.
*/
#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sum_of_digits(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;   
}
int sum_of_digits(int n)
{
    int sum = 0, rem;
    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}