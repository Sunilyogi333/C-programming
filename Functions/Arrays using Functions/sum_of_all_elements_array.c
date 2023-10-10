//WAP to find sum of all elements in the array using function and display the sum in main function.
#include<stdio.h>
void input(int[],int);
void display(int[],int);
int sum_of_array(int[],int);
int main()
{
    int n, result, arr[100];
    printf("\nEnter the size of array: ");
    scanf("%d",&n); 
    input(arr,n);
    printf("\nThe array elements are: \n");
    display(arr,n);
    result = sum_of_array(arr,n);
    printf("\nThe sum of all elements in the array is: %d\n",result);
    return 0;
}
void input(int arr[],int n)
{
    int i;
    printf("\nEnter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int sum_of_array(int arr[],int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}