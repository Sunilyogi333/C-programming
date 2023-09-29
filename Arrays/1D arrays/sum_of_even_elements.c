//WAP to find sum of even elements of an array.
#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("\nThe sum of even elements of array is: %d\n",sum);
    return 0;
}