#include<stdio.h>

int main()
{
    float C;
    float F;
   
    printf("Value in celsius \n");
    scanf("%f", &C);
    
     F = C * (9/5) + 32;

    printf("Value in Fahrenheit %f", F);

    return 0;
}