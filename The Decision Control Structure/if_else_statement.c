//WAP to illustrate the use of if-else statement.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Inside if block\n");
        printf("You can vote\n");

    }
    else
    {
        printf("Inside else block\n");
        printf("You cannot vote\n");
    }
    return 0;
}