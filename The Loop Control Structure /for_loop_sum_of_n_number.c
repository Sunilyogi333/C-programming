//WAP for sum of n numbers using for loop
#include<stdio.h>
int main()
{
    int i, sum=0,n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum =%d", sum);
    return 0;
}