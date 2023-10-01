//WAP to convert uppercase character to lowercase and viceversa in a given string:
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("The string in lowercase is: %s", str);
    return 0;
}