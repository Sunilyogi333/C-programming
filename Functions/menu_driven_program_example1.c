/*
Write a menu driven program for following.
1. Factorial of a number
2. Sum of digits 
3. Exit
*/
#include<stdio.h>
#include<stdlib.h>
void factorial();
void sum_of_digits();
int main()
{
    int choice;
    while(1)
    {
        printf("***Menu***\n");
        printf("1. Factorial of a number\n");
        printf("2. Sum of digits\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                factorial();
                break;
            case 2:
                sum_of_digits();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
void factorial()
{
    int num, fact = 1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n\n", num, fact);
}   
void sum_of_digits()
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits is %d\n\n", sum);
}

/*
--> The line of code while(1) creates an infinite loop in the C programming language. Here's an explanation of how it works:

1. while is a loop control statement in C used to repeatedly execute a block of code while a specified condition is true.

2. In this case, the condition specified in the parentheses is 1. In C, any non-zero integer value is considered "true," while zero is considered "false." Since 1 is a non-zero value, the condition is always true.

3. As a result, the while(1) loop will continue to execute indefinitely because the condition is always true. There is no natural termination condition within the loop itself.

4. To exit this infinite loop, you typically rely on other control flow statements or user input. In your provided code, there is an option to exit the loop and the program when the user selects "3" (Exit) from the menu. The exit(0) function call is used to terminate the program.

In summary, while(1) is a common way to create an infinite loop in C, and it's often used when you want a loop to keep running until you explicitly break out of it using some form of external control, such as a menu choice or a user input.

*/