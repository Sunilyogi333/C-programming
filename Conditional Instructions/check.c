#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int greatest;

    printf("Enter the number 1 \n");
    scanf("%d", &num1);
    printf("Enter the number 2 \n");
    scanf("%d", &num2);
    printf("Enter the number 3 \n");
    scanf("%d", &num3);

    if (num1 > (num2 && num3))
    {
        greatest = num1;
    }

    else if (num2 > (num1 && num3))
    {
        greatest = num2;
    }
    else if (num3 > (num2 && num1))
    {
        greatest = num3;
    }
    printf("Greatest number is %d \n", greatest);
    return 0;
}