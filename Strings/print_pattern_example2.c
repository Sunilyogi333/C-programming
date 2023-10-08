/*
WAP to print the following pattern:
Enter a string: PROGRAM
PROGRAM
PROGRA
PROGR
PROG
PRO
PR
P
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, j,length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);

    for (i = length-1; i>=0; i--)
    {
        for (j = 0; j <= i ; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}