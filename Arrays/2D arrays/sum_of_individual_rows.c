//WAP to find sum of individual rows in m*n matrix.
#include<stdio.h>
int main()
{
    int i,j,m,n,arr[100][100],sum=0;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    //input matrix
    printf("Enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter arr[%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //output matrix
    printf("The matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //Calculate sum
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        printf("The sum of row %d is %d\n",i+1,sum);
    }
    return 0;
}