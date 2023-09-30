//WAP to add two n*n matrix.
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of matrix 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]); 
        }
    }
    printf("Enter the elements of matrix 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter b[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]); 
        }
    }
    printf("The matrix 1 is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The matrix 2 is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of matrix 1 and matrix 2 is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}