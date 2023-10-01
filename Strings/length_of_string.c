//WAP to find length of string.
#include<stdio.h>
int main()
{
    char str[50];
    int i=0;
    printf("Enter a string:");
    //gets(str);
    scanf("%s", str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("The length is %d\n", i);
    return 0;
}