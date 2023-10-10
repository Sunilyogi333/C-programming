//WAP to add two arrays using functions.
#include<stdio.h>
void input(int[],int);
void display(int[],int);
void add(int[],int[],int[],int);
int main()
{
    int a[100],b[100],c[100],n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    input(a,n);
    input(b,n);
    add(a,b,c,n);
    printf("\nThe array elements are: \n");
    display(c,n);
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
void add(int a[],int b[], int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
}
