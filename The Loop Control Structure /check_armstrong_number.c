//WAP to check the armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum=0, temp, temp2, rem, count=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp2=n;
    while(temp2>0)
    {
        rem=temp2%10;
        sum=sum+pow(rem, count);
        temp2=temp2/10;
    }
    if(sum==n)
    {
        printf("Armstrong number \n");
    }
    else
    {
        printf("Not an armstrong number \n");
    }
}