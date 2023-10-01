/*
It is used to concatenates two strings.
syntax: strcat(string1, string2);
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the first string: ");
    //fgets(str1,50,stdin);
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    // fgets(str2,50,stdin);
    strcat(str1, str2);
    printf("str1 = %s\n", str1);
    return 0;
}

