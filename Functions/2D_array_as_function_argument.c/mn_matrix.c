// WAP to input and display m x n matrix using function.
#include<stdio.h>
void input(int [100][100], int, int);
void display(int [100][100], int, int);
int main()
{
    int m, n, a[100][100];
    printf("Enter rows: ");
    scanf("%d", &m);
    printf("Enter columns: ");
    scanf("%d", &n);
    input(a, m, n);
    printf("The matrix is:\n");
    display(a, m, n);
    return 0;
}
void input(int a[100][100], int m, int n)
{
    int i, j;
    printf("Enter elements:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[100][100], int m, int n)
{
    int i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}