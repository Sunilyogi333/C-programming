
/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        //space printing
        for(i=1;i<=j-1;i++)
        {
            printf(" ");
        }
        //star printing
        for(k=n;k>=j;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}