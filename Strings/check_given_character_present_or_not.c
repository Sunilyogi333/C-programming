//WAP to check whether the given character is present in the string or not.
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,flag=0;
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the character to be searched: ");
    scanf(" %c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]==ch)||(str[i]==ch+32)||(str[i]==ch-32))
        {
            printf("'%c' found of location: %d\n",ch,i+1);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }
}