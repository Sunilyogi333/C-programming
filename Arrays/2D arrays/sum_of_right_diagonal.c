//WAP to find sum of right diagonal in m*n matrix (sqare matrix).
#include<stdio.h>
int main()
{
    int i,j,n,arr[100][100],sum=0;
    printf("Enter the size of sqare matrix: ");
    scanf("%d",&n);

    //input matrix
    printf("Enter the elements in sqaure matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter arr[%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //output matrix
    printf("The array elements are: \n");
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
            if(i+j==n-1)
            {
                sum+=arr[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of right diagonal of sqaure matrix is: %d\n",sum);
    return 0;
}