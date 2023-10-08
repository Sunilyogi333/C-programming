//WAP to find copy one array into another array in reverse order dynamically.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1, *ptr2, j=0 ,i ,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    ptr1 = (int*)calloc(n, sizeof(int));
    ptr2 = (int*)calloc(n, sizeof(int));
    if(ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", ptr1+i);
    }
    printf("The elements of array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr1+i));
    }
    printf("\n");
    //Copying the elements of array in reverse order.
    for(i=n-1; i>=0; i--)
    {
        *(ptr2+j) = *(ptr1+i);
        j++;
    }
    printf("The elements of array in reverse order are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr2+i));
    }
    printf("\n");
    free(ptr1);
    free(ptr2);
    return 0;
}