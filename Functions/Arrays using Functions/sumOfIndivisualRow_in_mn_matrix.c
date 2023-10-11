//WAP to find sum of indivisual rows in m*n matrix
#include<stdio.h>
void input(int a[100][100], int m, int n);
void display(int a[100][100], int m, int n);
void sum(int a[100][100], int m, int n);
int main()
{
    int arr[100][100], m, n;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &m, &n);
    input(arr, m, n);
    printf("The elements of the array are:\n");
    display(arr, m, n);
    sum(arr, m, n);
    return 0;
}
void input(int a[100][100], int m, int n)
{
    int i, j;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[100][100], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void sum(int a[100][100], int m, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        printf("The sum of row %d is %d\n", i + 1, sum);
    }
}
