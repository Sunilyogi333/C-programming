/*
It is used to convert string to lower case.
syntax: strlwr(string_variable);

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    // gets(str);
    strlwr(str);
    printf("converter string: %s", str);
    return 0;
}

I used strlwr to convert string to lower case but it is not working. Because it is not in C standard library. 
It is in C++ standard library. 
So, I used tolower() function to convert string to lower case.
So the code is:
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    // gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        str[i]=tolower(str[i]);
    }
    printf("converter string: %s", str);
    return 0;
}