/*
Switch case
- switch case is a control statement that allows us to check the value of a variable 
and compare it with multiple cases.
- The switch statement is useful when we have to make a decision from the number of choices.
Syntax:
switch (expression)
{
    case constant-expression  :
        statement(s);
        break; //optional
    case constant-expression  :
        statement(s);
        break; //optional
    // you can have any number of case statements.
    default : //Optional
        statement(s);
}
*/
/*
Example:
***Calculater***
1.Addition
2.Subtraction
3.Multiplication
4.Division
*/
#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("\n***Calculater***\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("\n Enter two numbers");
    scanf("%f%f",&a,&b);
    printf("\n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\n Addition of %.2f and %.2f is %.2f",a,b,a+b);
            break;
        case 2:
            printf("\n Subtraction of %.2f and %.2f is %.2f",a,b,a-b);
            break;
        case 3:
            printf("\n Multiplication of %.2f and %.2f is %.2f",a,b,a*b);
            break;
        case 4:
            printf("\n Division of %.2f and %.2f is %.2f",a,b,a/b);
            break;
        default:
            printf("\n Invalid choice");
    }
    return 0;
}