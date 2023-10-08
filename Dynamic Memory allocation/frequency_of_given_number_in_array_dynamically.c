//WAP to find frequency of given number in a array dynamically.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, i, n, num, count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error in memory allocation.\n");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",ptr+i);
    }
    printf("Enter the number whose frequency you want to find: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)==num)
        {
            count++;
        }
    }
    printf("The frequency of %d is %d.\n",num,count);
    free(ptr);
    return 0;
}