//WAP to convert lowercase to uppercase and vice versa.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any one character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
    }
    else if(ch>='a' && ch<='z')
    {
        ch=ch-32;
    }
    else
    {
        printf("Invalid input.\n");
    }
    printf("%c\n",ch);
    return 0;
}