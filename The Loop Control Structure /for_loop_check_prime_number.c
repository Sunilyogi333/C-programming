/*
WAP to check prime number using for loop.
*/
#include<stdio.h>
int main()
{
    int n, i, flag=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        printf("Prime number \n");
    }
    else
    {
        printf("Not a prime number \n");
    }
}