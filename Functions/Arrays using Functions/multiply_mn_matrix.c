//WAP to multiply mn matrix using functions
#include <stdio.h>
#include <stdlib.h>
void input(int[][100], int, int);
void display(int[][100], int, int);
void multiply(int[100][100], int[100][100],int[100][100], int, int, int, int);
int main()
{
    int a[100][100], b[100][100], c[100][100], r1, c1, r2, c2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible");
        exit(0);
    }
    else
    {
        printf("Enter the elements of first matrix: ");
        input(a, r1, c1);
        printf("Enter the elements of second matrix: ");
        input(b, r2, c2);
        printf("The first matrix is: \n");
        display(a, r1, c1);
        printf("The second matrix is: \n");
        display(b, r2, c2);
        multiply(a, b, c, r1, c1, r2, c2);
        printf("The resultant matrix is: \n");
        display(c, r1, c2);
    }
}

void input(int arr[100][100], int r, int c)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[100][100], int r, int c)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
void multiply(int a[100][100], int b[100][100],int c[100][100], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

/*
note:
- C doesn't allow passing 2D arrays as function parameters without specifying the number of columns explicitly. 
- when defining the function prototypes, the size of the arrays should be defined.
*/