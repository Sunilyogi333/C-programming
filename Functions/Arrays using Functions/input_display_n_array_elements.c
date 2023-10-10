//Write a program to input and display n array elements using functions.
#include<stdio.h>
void input (int[], int);
void display (int[], int);
int main()
{
    int arr[100], n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    input(arr,n);
    printf("\nThe array elements are: \n");
    display(arr,n);
    return 0;
}
void input(int arr[], int n)
{
    int i;
    printf("\nEnter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}