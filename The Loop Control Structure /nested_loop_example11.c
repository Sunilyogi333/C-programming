/*
A
AB
ABC 
ABCD
ABCDE
*/
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
            printf("%c",'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}