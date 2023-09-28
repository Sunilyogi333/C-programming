/*
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(j=n;j>=1;j--)
    {
        //space printing
        for(i=n;i>=j+1;i--)
        {
            printf(" ");
        }
        //star printing
        for(k=1;k<=2*j-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}