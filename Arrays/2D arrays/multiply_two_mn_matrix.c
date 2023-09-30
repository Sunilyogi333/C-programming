//WAP to multiply two m*n matrix.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,i,j,k,sum;
    printf("Enter the row and column of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Multiplication is not possible");
        exit(0);
    }
    printf("Enter the elements of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]); 
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter b[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]); 
        }
    }
    printf("The first matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of first matrix and second matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}