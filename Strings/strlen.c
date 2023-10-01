/*
Strlen(): It is used to find length of string.
syntax:
length=strlen(String_varaibles);
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int length;
    printf("Enter string:");
    scanf("%s", str);
    // gets(str);
    length=strlen(str);
    printf("length is: %d\n",length);
    return 0;
}