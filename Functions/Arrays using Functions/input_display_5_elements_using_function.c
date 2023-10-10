//Write a program to input and display 5 array elements using function.
#include<stdio.h>
void input(int[]);
void display(int[]);
int main()
{
    int arr[5];
    input(arr);
    printf("\nThe array elements are: \n");
    display(arr);
    return 0;
}
void input(int arr[])
{
    int i;
    printf("\nEnter the array elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}
