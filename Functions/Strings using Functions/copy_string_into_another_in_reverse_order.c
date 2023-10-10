//WAP to copy one string into another in reverse order using functions.
#include<stdio.h>
#include<string.h>
void copy(char[], char[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    copy(str1, str2);
    printf("The copied string is: %s\n", str2);
    return 0;
}
void copy(char str1[], char str2[])
{
    int length, i=0;
    length = strlen(str1);
    for(i=0; i<length; i++)
    {
        str2[i] = str1[length-i-1];
    }
    str2[i] = '\0';
}