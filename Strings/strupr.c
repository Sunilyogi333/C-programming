/*
strupr(): It is used to convert string to uppercase.
syntax: strupr(string_variable);

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);
    strupr(str);
    printf("Converted string: %s",str);
    return 0;
}
I used strupr() to convert string to uppercase but it is not working.
Because it is not in C standard library.
It is in C++ standard library.
So, I used toupper() function to convert string to uppercase.
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
    int length=strlen(str);
    for(int i=0; i<length; i++)
    {
        str[i]=toupper(str[i]);
    }
    printf("Converted string: %s",str);
    return 0;
}