// WAP to input and display 3x2 matrix using function.
#include<stdio.h>
void input(int [3][2]);
void display(int [3][2]);

int main()
{
    int arr[3][2];
    input(arr);
    printf("\nThe matrix is matrix is:\n");
    display(arr);
    return 0;
}
void input(int arr[3][2])
{
    int i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void display(int arr[3][2])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}