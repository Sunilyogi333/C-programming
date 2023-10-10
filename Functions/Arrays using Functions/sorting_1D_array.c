// WAP to sort 1D array using functions.
#include <stdio.h>
void input(int[], int);
void display(int[], int);
void sort(int[], int);
int main()
{
    int a[100], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    input(a, n);
    printf("The array is: ");
    display(a, n);
    sort(a, n);
    printf("The sorted array is: ");
    display(a, n);
    return 0;
}
void input(int a[], int n)
{
    int i;
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i+1 ; j<n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}