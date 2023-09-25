/*
Implicit Type casting
-It is the process of converting a data value from one type to another type automatically by compiler.
*/
// Example for Implicit type casting
#include <stdio.h>
int main()
{
    int x = 10;
    char y = 'a';
    float z;
    x = x + y; // y is implicitly converted to integer
    printf("Value of x:%d\n", x);
    z = x + 1.0; // x is implicitly converted to float
    printf("Value of z:%f\n", z);
    return 0;
}