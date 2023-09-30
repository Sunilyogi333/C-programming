//WAP to find hightest element in m*n matrix
#include<stdio.h>
int main()
{
    int i,j,m,n,arr[100][100],max;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);

    //input matrix
    printf("Enter elements in array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //display matrix
    printf("The matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //highest element
    max=arr[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("The highest element is %d\n",max);
    return 0;
}