/*WAP a program to print the following pattern:
Enter a string: PROGRAM
P
PR
PRO
PROG
PROGR
PROGRA
PROGRAM
*/
#include <stdio.h>
int main()
{
    char str[50];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}