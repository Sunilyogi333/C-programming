//WAP to check whether a number is even or odd using if-else statement.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is even number\n",num);
    }
    else{
        printf("%d is odd number\n",num);
    }
    return 0;
}