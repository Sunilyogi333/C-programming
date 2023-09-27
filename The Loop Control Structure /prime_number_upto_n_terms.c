//WAP to print prime number upto n terms
#include<stdio.h>
int main()
{
    int n,i,j,factor;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factor=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                factor++;
            }
        }
        if(factor==2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}