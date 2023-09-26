#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; //--> phele print fir increment
    ++i; // --> phele increment fir print
    printf("The value of i is %d\n", i);
    i += 10; // increment i by 10
    printf("The value of i is %d", i);
    return 0;
}