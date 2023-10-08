//WAP to find frequency of given character in the string.
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to be searched: ");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]==ch)||(str[i]==ch+32)||(str[i]==ch-32))
        {
            count++;
        }
    }
    printf("Frequency of '%c' is: %d\n",ch,count);
    return 0;
}