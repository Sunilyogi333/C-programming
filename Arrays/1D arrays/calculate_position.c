//WAP to check if given number is present or not in an array and if present then calculate its position.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,arr[100],num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("\nEnter number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("%d is found at %d position\n",num,i+1);
            exit(0);
        }
    }
    printf("The number is not found\n");
    return 0;
}