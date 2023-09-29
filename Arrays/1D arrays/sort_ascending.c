//WAP to sort the elements of an array in ascending order.
#include<stdio.h>
int main()
{
    int i,n,a[100],j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        printf("Enter arr1[%d] element: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe elements of array are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe elements of array in ascending order are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;   
}
