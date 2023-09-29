
/*
if_statement
-It is used to execute a block of statements only when a given condition is true.
syntax:
if(condition)
{
    statements;
}
*/
//Program to illustrate if-statement
#include<stdio.h>
int main()
{
    int a;
    printf("Enter one Number: ");
    scanf("%d",&a);
    if(a<10)
    {
        printf("Inside if statement\n");
        printf("a=%d\n",a);
    }
    printf("Outside if block\n");
    return 0;
}