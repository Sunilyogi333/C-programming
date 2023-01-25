#include<stdio.h>

int main()
{
    int num1, num2, num3 ;

    printf("Enter the number 1 \n");
    scanf("%d", &num1);
    printf("Enter the number 2 \n");
    scanf("%d", &num2);
    printf("Enter the number 3 \n");
    scanf("%d", &num3);

    if( num1>num2 && num1>num3 )
    {
        printf("num1 is greatest number \n");
    }
    else if( num2>num1 && num2>num3)
    {
        printf("num2 is greatest number \n");
    }
    else if( num3>num2 && num3>num1)
    {
        printf("num3 is greatest number \n");
    }

    return 0;
}