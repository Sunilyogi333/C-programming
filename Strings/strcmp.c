/*
It is used to compare two strings. 
strcmp() returns 0 if both strings are equal else it returns '+1' or '-1'.
syntax: strcmp(string 1, string 2);
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    //gets(str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    //gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Equal\n");
    }
    else 
    {
        printf("Not equal\n");
    }
    return 0;
}