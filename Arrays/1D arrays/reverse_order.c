// WAP to display array in reverse order.
#include<stdio.h>
int main()
{
    int i,n,arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}