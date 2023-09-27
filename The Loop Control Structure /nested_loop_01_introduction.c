/*
Nested loops
- A loop inside another loop is called a nested loop.
- The inner loop is executed more times than the outer loop.
- Any loops(for, while, do-while) can be nested.
- There is no restriction on level of nesting in C programming language.
*/
/*
Example:
 * * * * *
 * * * * *
 * * * * *
*/
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(j=1;j<=n; j++)
    {
        for(i=1; i<=5;i++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
