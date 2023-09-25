/*
Defining Constant
-There are two ways to define constant in C programming.
1. Using const keyword
For example:
const float PI = 3.14;
2. Using #define preprocessor
For example:
#define PI 3.14
*/
//Example using both ways
#include <stdio.h>
#define PI 3.14
int main()
{
    const float pi = 3.14;
    printf("PI = %f\n", PI);
    printf("pi = %f\n", pi);
    return 0;
}
