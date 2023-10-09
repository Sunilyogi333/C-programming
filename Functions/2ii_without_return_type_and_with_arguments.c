//Example: Function without return type and with arguments
#include <stdio.h>
void add(int,int);    // Function prototype
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    add(a,b);    // Function call
    return 0;
}
void add(int a,int b) // Function definition
{
    int sum;
    sum=a+b;
    printf("Sum of %d and %d is %d\n",a,b,sum);
}