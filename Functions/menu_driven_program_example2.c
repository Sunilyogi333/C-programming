/*
Write a menu driven program for following.
1. Check odd/even
2. print fibonacci series upto n terms
3. reverse of a number
*/
#include <stdio.h>
#include <stdlib.h>
void odd_even();
void fibonacci();
void reverse();

int main()
{
    int choice;
    char ch;
    do{
        printf("***Menu***\n");
        printf("1. Check odd/even\n");
        printf("2. Print fibonacci series upto n terms\n");
        printf("3. Reverse of a number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                odd_even();
                break;
            case 2:
                fibonacci();
                break;
            case 3:
                reverse();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;
}
void odd_even()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
}
void fibonacci()
{
    int num, i, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series upto %d terms is: ", num);
    printf("%d %d ", a, b);
    for(i = 1; i <= num - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}
void reverse()
{
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("Reverse of a number is %d\n", rev);
}