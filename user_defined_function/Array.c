// Write a C program to input n number of array and display array elements using user defined function.
#include <stdio.h>
void input(int n, int a[])
{
    printf("Enter the array elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int n, int a[])
{
    printf("The array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
}
int main()
{
    int n, a[100];
    printf("Enter the value of n \n");
    scanf("%d", &n);
    input(n, a);
    display(n, a);
    return 0;
}