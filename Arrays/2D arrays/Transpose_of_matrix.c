//WAP to find Transpose of m*n matrix.
#include<stdio.h>
int main()
{
    int a[100][100],aT[100][100],m,n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]); 
        }
    }
    printf("The matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            aT[i][j]=a[j][i];
            printf("%d ",aT[i][j]);
        }
        printf("\n");
    }
    return 0;
}