//Example: Function with return type and without arguments
#include <stdio.h>
int add();    // Function prototype
int main()
{
    int sum;
    sum=add();    // Function call
    printf("Sum is %d\n",sum);
    return 0;
}
int add() // Function definition
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}