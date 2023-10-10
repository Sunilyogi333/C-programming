//WAP to convert uppercase character to lowercase character and vice-versa in a string using functions.
#include<stdio.h>
#include<string.h>
void convert(char[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    convert(str);
    printf("The converted string is: %s\n", str);
    return 0;
}
void convert(char str[])
{
    int length;
    length = strlen(str);
    int i=0;
    for(i=0; i<length; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
}