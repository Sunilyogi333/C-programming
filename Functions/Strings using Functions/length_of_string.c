//WAP to find length of string using function. Display result in main function.
#include<stdio.h>
int length(char[]);
int main()
{
    char str[100];
    int result;
    printf("Enter a string: ");
    scanf("%s", str);
    result = length(str);
    printf("The length is: %d\n", result);
    return 0;
}
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}