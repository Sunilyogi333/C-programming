//WAP to find frequency of a given number in an array using functions.
#include<stdio.h>
void input(int[],int);
void display(int[],int);
void count(int[],int,int);
int main()
{
    int a[100],n,num;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    input(a,n);
    printf("\nEnter the number to be counted: ");
    scanf("%d",&num);
    count(a,n,num);
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
void count(int a[],int n,int num)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("\n%d is not present in the array\n",num);
        return;
    }
    else
    {
    printf("\nThe frequency of %d is %d\n",num,c);
    }
}