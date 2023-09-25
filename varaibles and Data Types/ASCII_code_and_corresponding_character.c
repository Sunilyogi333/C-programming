//WAP to input ASCII and print Corresponding character
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the ASCII code\n");
    scanf("%d", &a);
    printf("The character for ASCII code %d is %c\n", a, a);
    return 0;
}