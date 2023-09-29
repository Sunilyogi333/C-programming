//WAP to check whether given character is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any one character: ");
    scanf("%c", &ch);
    if (ch=='a' || ch=='A'|| ch=='e' || ch=='E'|| ch=='i' || ch=='I'|| ch=='o' || ch=='O'|| ch=='u' || ch=='U')
    {
        printf("%c is vowel.\n",ch);
    }
    else
    {
        printf("%c is consonant.\n",ch);
    }
    return 0;
}