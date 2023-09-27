/*

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        for(i=n;i>=j;i--)
        {
            printf("* \t");
        }
        printf("\n");
    }
    return 0;
}