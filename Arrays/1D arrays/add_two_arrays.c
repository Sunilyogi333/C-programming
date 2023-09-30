//WAP to add two arrays of same size and store the result in third array.
#include<stdio.h>
int main()
{
    int a[100],b[100],sum[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The sum of two arrays is: ");
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d ",sum[i]);
    }
    return 0;
}