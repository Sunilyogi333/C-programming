/*
Example: Function with return type and with arguments
*/
#include <stdio.h>
int add(int,int);    // Function prototype
int main()
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=add(a,b);    // Function call
    printf("Sum of %d and %d is %d\n",a,b,sum);
    return 0;
}
int add(int a,int b) // Function definition
{
    return (a+b);
}