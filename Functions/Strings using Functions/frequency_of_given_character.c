//WAP to find frequency of a given character in a string using functions.
#include<stdio.h>
void count(char[], char);
int main()
{
    char str[100], ch;
    printf("Enter the string: ");
    scanf("%s", str);
    
    getchar(); // Consume the newline character left in the input buffer

    printf("Enter the character: ");
    scanf("%c", &ch);
    count(str, ch);
    return 0;
}
void count(char str[], char ch)
{
    int i=0, count=0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("The frequency of %c is %d\n", ch, count);
}

/*
After reading the string with scanf("%s", str);, you should consume the newline character left in the input buffer. This is done using getchar(). If you don't do this, the newline character will be read by the next scanf() statement and the user will not be able to enter the character.
*/