#include<stdio.h>

int main()
{
    int marks; 
    printf("Write your marks (50-100) \n");
    scanf("%d", &marks);

    if(marks<=100 && marks>90)
    {
    printf("congratulation, you got grade A \n");
    }
    else if(marks<=90 && marks>80)
    {
    printf("congratulation, you got grade B \n");
    }
    else if(marks<=80 && marks>70)
    {
    printf("congratulation, you got grade C \n");
    }
    else if(marks<=70 && marks>60)
    {
    printf("congratulation, you got grade D \n");
    }
    else if(marks<=60 && marks>50)
    {
    printf("congratulation, you got grade E \n");
    }
    else
    {
        printf("sorry, we couldn't find your number");
    }
    return 0;
}