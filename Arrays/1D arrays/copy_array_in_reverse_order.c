//WAP to copy one array into another array in reverse order.
#include<stdio.h>
int main()
{
    int i,n,arr1[100],arr2[100],j=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr1[%d] element: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    //copying arr1 to arr2 in reverse order
    for(i=n-1;i>=0;i--)
    {
        arr2[j]=arr1[i];
        j++;
    }
    printf("\nThe copied array in reverse order is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}