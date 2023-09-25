/*
Character Data Types
-used to store single character
-keyword: char
-size: 1 byte
-range: 0 to 255
-format specifier: %c
*/
//WAP to input and display a single character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any one character\n");
    scanf("%c", &ch);
    printf("The character you entered is %c\n", ch);
    return 0;
}