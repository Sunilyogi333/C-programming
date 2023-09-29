#include <stdio.h>

int main()
{
    int physics, maths, chemistry;
    float total;

    printf("Enter Physics marks \n");
    scanf("%d", &physics);
    printf("Enter maths marks \n");
    scanf("%d", &maths);
    printf("Enter Chemistry marks \n");
    scanf("%d", &chemistry);
    total = (physics + maths + chemistry) / 3;

    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your percentage is %f and you are fail \n", total);
    }
    else
    {
    printf("Your percentage is %f and you are pass \n", total);
    }
    return 0;
}