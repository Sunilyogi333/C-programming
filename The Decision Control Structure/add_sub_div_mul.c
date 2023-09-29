/*
****Calculation****
1. Addition
2. Subtraction
3. Multiplication
4. Division
*/
#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("****Calculation****\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("%f+%f=%.2f\n",a,b,a+b);
    }
    else if(choice==2)
    {
        printf("%f-%f=%.2f\n",a,b,a-b);
    }
    else if(choice==3)
    {
        printf("%f*%f=%.2f\n",a,b,a*b);
    }
    else if(choice==4)
    {
        printf("%f/%f=%.2f\n",a,b,a/b);
    }
    else
    {
        printf("Invalid input.\n");
    }
    return 0;
}