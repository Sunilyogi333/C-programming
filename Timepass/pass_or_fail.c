#include <stdio.h>

int main()
{
    int marks;

    printf("Write your marks \n");
    scanf("%d", &marks);

    if (marks >= 40)   
     {
        printf("Congratulations, you are pass ! \n");
    }
    else
    {
        printf("sorry, you are fail but don't worry \n you can try your best next time\n");
    }
    return 0;
}