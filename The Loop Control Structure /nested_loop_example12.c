#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(j=1;j<n;j++)
    {
        for(i=n;i>=j+1;i--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}