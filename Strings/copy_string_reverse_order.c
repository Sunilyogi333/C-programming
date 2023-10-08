//WAP to copy one string into another string in reverse order.
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,length=0,j=0;
    printf("Enter a string: ");
    scanf("%s", str1);
    for(i=0; str1[i]!='\0'; i++)
    {
        length++;
    }
    for(i=length-1; i>=0; i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("The copied string is %s\n", str2);
    return 0;
}