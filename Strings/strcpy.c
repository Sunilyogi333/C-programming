/*
Is is used to copy one string into another.
syntax: strcpy(string1,string2);
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    // gets(str1);
    strcpy(str2,str1);
    printf("Copied string: %s\n",str2);
    return 0;
}