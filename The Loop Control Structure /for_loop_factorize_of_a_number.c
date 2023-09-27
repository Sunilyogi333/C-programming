//WAP for factorize of a number using for loop
#include<stdio.h>
int main()
{
    int i, n,fact=1;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d", n, fact);
    return 0;
}