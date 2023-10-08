// WAP to check for palindrome string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, length = 0, middle, flag = 0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    length = strlen(str);

    middle = length / 2;
    for (i = 0; i < middle; i++)
    {
        if ((str[i] == str[length - i - 1]) || str[i] == str[length - i - 1] + 32 || str[i] == str[length - i - 1] - 32)
        {
            flag++;
        }
    }
        if (flag == middle)
        {
            printf("String is palindrome\n");
        }
        else
        {
            printf("String is not palindrome\n");
        }
        return 0;
}