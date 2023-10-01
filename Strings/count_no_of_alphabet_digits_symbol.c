// WAP to convert no of alphabet, digits and symbol in a given string:
#include <stdio.h>
int main()
{
    char str[50];
    int i, acount = 0, dcount = 0, scount = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if(((str[i]>='A'&& str[i]>'Z')|| str[i]>='a'&& str[i]<='z'))
        {
            acount++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dcount++;
        }
        else
        {
            scount++;
        }
    }
    printf("The no of alphabets are: %d\n", acount);
    printf("The no of digits are: %d\n", dcount);
    printf("The no of symbols are: %d\n", scount);
    return 0;
}