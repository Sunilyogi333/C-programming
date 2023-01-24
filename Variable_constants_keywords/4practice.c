#include<stdio.h>

int main()
{
    int principle = 100, rate=4, years=1;
    int simpleinterest = (principle * rate * years) / 100;
    printf("The value of simple interest is %d", simpleinterest);
    return 0;
}