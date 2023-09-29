//WAP to find maximum number in an array.
#include <stdio.h>
int main()
{
    int i, n, max, arr[100];
    printf("Enter the size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d is the Maximum\n",max);
    return 0;
}
