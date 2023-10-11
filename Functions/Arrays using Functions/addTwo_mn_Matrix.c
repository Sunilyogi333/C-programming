//WAP to add two m*n matrix using functions
#include <stdio.h>
void input(int a[100][100], int m, int n);
void display(int a[100][100], int m, int n);
void add(int a[100][100], int b[100][100], int m, int n);
int main()
{
    int arr1[100][100], arr2[100][100], m, n;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the first array:\n");
    input(arr1, m, n);
    printf("Enter the elements of the second array:\n");
    input(arr2, m, n);
    printf("The elements of the first array are:\n");
    display(arr1, m, n);
    printf("The elements of the second array are:\n");
    display(arr2, m, n);
    add(arr1, arr2, m, n);
    return 0;
}
void input(int a[100][100], int m, int n)
{
    int i, j;
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
        printf("\t");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void add(int a[100][100], int b[100][100], int m, int n)
{
    int i, j, sum[100][100];
    printf("The sum of the two arrays is:\n");
    for (i = 0; i < m; i++)
    {
        printf("\t");
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}