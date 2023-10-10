//WAP to copy one string in another by changing lowercase character to uppercase and vice-versa using functions.
#include<stdio.h>
void convert(char[], char[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    convert(str1, str2);
    printf("The converted string is %s\n", str2);
    return 0;
}
void convert(char str1[], char str2[])
{
    int i;
    for(i=0; str1[i]!='\0'; i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
            str2[i]=str1[i]-32;
        else if(str1[i]>='A' && str1[i]<='Z')
            str2[i]=str1[i]+32;
        else
            str2[i]=str1[i];
    }
    str2[i]='\0';
}
