/*
Run time initialization of variable
If the initialization of the variable is done at the time of execution or run time, 
it is call Run time initialization of variable.
for example: int a;
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The value of a is %d\n", a);
}