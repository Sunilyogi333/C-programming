//WAP to check if two arrays are equal or not.
#include<stdio.h>
int main()
{
    int i,n,arr1[100],arr2[100],flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of first array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter arr1[%d] element: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second array\n ");
    for(i=0;i<n;i++)
    {
        printf("Enter arr2[%d] element: ",i);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The arrays are equal.\n");
    }
    else
    {
        printf("The arrays are not equal.\n");
    }
    return 0;
}