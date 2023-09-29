/*
Nested if-else
The if-else statement can be nested in the else part of another if-else statement. 
This means that the else part of an if-else statement can itself be an if-else statement.
This is called nesting of if-else statement.
Syntax:
if(condition1)
{
    if(condition2)
    {
        //statements
    }
    else
    {
        //statements
    }
}
else
{
    if(condition_3)
    {
        //statements
    }
    else
    {
        //statements
    }
}
*/
//WAP to illustrate the concept of nested if-else statement.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is maximum\n",a);
        }
        else
        {
            printf("%d is maximum\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is maximum\n",b);
        }
        else
        {
            printf("%d is maximum\n",c);
        }
    }
    return 0;
}