// WAP to determine whether the entered character uppercase, lowercase, digit or symbol.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter any one character: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("Uppercase\n");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Lowercase\n");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Digit\n");
    }
    else 
    {
        printf("Symbol\n");
    }
    return 0;
}