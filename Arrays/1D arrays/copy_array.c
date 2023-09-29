//WAP to copy one array into another array.
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter first array elements\n ");
    for(i=0;i<n;i++)
    {
        printf("Enter arr1[%d] element: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("The first array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    //copying arr1 to arr2
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nThe copied array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}