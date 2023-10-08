//WAP to copy one string in another by changing uppercase character to lowercase and viceversa.
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter the string: ");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str2[i]=str1[i]+32;
        }
        else if(str1[i]>='a' && str1[i]<='z')
        {
            str2[i]=str1[i]-32;
        }
        else
        {
            str2[i]=str1[i];
        }
    }
    str2[i]='\0';
    printf("The copied string is: %s",str2);
    return 0;
}