//WAP to find sum of odd and even elements in a array dynamically.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n,odd_sum=0,even_sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr==NULL)
    {
        printf("Error in memory allocation.\n");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter the element %d: ",i+1);
            scanf("%d",ptr+i);
        }
        for(i=0;i<n;i++)
        {
            if(*(ptr+i)%2==0)
            {
                even_sum+=*(ptr+i);
            }
            else
            {
                odd_sum+=*(ptr+i);
            }
        }
    }
    printf("The sum of even elements is: %d\n",even_sum);
    printf("The sum of odd elements is: %d\n",odd_sum);
    free(ptr);
    return 0;
}