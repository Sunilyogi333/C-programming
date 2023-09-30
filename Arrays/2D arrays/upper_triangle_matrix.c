//WAP to find upper traingle matrix of a square matrix.
#include<stdio.h>
int main()
{
    int a[100][100],n,i,j;
    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of matrix\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]); 
        }
    }
    printf("The matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The upper traingle matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}