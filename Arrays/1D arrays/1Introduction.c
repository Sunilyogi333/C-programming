/*
Array
-Array is the collection of homogeneous data items stored in a contiguous memory location.
-Array is a linear data structure.
syntax:
datatype arrayName[size];
int arr[5];
arr carries 5 elements of type int.
datatype arrayName[size]={value1,value2,value3,....};
int arr[5]={1,2,3,4,5};
int arr[]={1,2,3,4,5};

1.Static Initialization
-static initialization is done at the time of declaration.
for example:
int arr[5]={1,2,3,4,5};
-Declares zero value if not given.

2.Dynamic Initialization
-dynamic initialization is done after declaration.
for example:
int arr[5];
for(i=0;i<5;i++)
{
    printf("Enter the value of arr[%d]:",i);
    scanf("%d",&arr[i]);
}
*/
//WAP to input and output n-array elements.
#include<stdio.h>
int main()
{
    int i,n,arr[100];
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
    return 0;
}