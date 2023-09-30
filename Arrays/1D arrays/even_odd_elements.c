/*
WAP to read n integer numbers from the user into the array AR. The odd elements are copied
into another array OAR and other element are copied in EAR. Display the contents of OAR and EAR.
*/
#include<stdio.h>
int main()
{
    int i,n,arr[100],OAR[100],EAR[100],o=0,e=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array\n ");
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
        if(arr[i]%2==0)
        {
            EAR[e]=arr[i];
            e++;
        }
        else
        {
            OAR[o]=arr[i];
            o++;
        }
    }
    printf("\nThe even array elements are: \n");
    for(i=0;i<e;i++)
    {
        printf("%d\t",EAR[i]);
    }
    printf("\nThe odd array elements are: \n");
    for(i=0;i<o;i++)
    {
        printf("%d\t",OAR[i]);
    }
    return 0;
}