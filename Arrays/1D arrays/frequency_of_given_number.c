//WAP to find frequency of given number in an array.
#include<stdio.h>
int main()
{
    int arr[100],i,n,num,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    printf("The frequency of %d is %d.\n",num,count);
    return 0;
}