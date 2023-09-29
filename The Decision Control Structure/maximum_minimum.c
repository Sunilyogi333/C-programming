//WAP to check whether a number is maximum or minimum using if-else statement.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum\n",a);
    }
    else
    {
        printf("%d is minimum\n",a);
    }
}