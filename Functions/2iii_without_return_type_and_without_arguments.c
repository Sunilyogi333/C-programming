//Example: Function without return type and without arguments
#include <stdio.h>
void add();    // Function prototype
int main()
{
    add();    // Function call
    return 0;
}
void add() // Function definition
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of %d and %d is %d\n",a,b,sum);
}