/*
Strrev(): It is used to reverse the string.
syntax: strrev(string_variable);

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);
    strrev(str);
    printf("Reverse: %s",str);
    return 0;
}

I used strrev() to reverse string but it is not working. Because it is not in C standard library.
It is in C++ standard library.
So, I used my own logic to reverse string.
So the code is:
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    // gets(str);
    int length=strlen(str);
    for(int i=0; i<length/2; i++)
    {
        char temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
    printf("Reverse: %s",str);
    return 0;
}