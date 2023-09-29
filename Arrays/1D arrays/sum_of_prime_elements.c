//WAP to find the sum of prime elements in an array.
#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0,factor,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        factor=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                factor++;
            }
        }
        if(factor==2)
        {
            sum=sum+arr[i];
        }
    }
    printf("\nThe sum of prime numbers in array is: %d\n",sum);
    return 0;
}