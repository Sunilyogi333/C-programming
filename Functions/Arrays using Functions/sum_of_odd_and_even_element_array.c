//WAP to find sum of old and even element in array using function and display the sum in main function.
#include<stdio.h>
void input(int[],int);
void display(int[],int);
void odd_even_sum(int[],int);
int main()
{
    int n, result, arr[100];
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    input(arr,n);
    printf("\nThe array elements are: \n");
    display(arr,n);
    odd_even_sum(arr,n);
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
void odd_even_sum(int arr[],int n)
{
    int i, odd_sum=0, even_sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even_sum = even_sum + arr[i];
        }
        else
        {
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("\nThe sum of odd elements in the array is: %d\n",odd_sum);
    printf("The sum of even elements in the array is: %d\n",even_sum);
}