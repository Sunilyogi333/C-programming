//WAP to sort 1-D array dynamically.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, i, j, n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", ptr+i);
    }
    printf("The elements of array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    //Sorting the elements of array.
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    printf("The elements of array after sorting are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    free(ptr);
    return 0;
}