//Write a C program to read any two numbers and display their sum using user defined function
#include<stdio.h>
int add(int, int);
int main(){
    int a,b,sum;
    printf("Enter any two numbers \n");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("Sum is: %d",sum);
    return 0;
}
int add(int x, int y)
{
    return(x+y);
}