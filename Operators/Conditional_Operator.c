/*
Conditional Operator: (condition) ? expression1 : expression2
- If condition is true, then expression1 is evaluated and becomes the result.
- If condition is false, then expression2 is evaluated and becomes the result.

Example:
(2 > 3) ? 5 : 7 = 7
(2 < 3) ? 5 : 7 = 5
(2 == 3) ? 5 : 7 = 7
(2 != 3) ? 5 : 7 = 5
*/ 
#include <stdio.h>
int main(){
    int a = 5, b = 7, c;
    c = (a > b) ? a : b;
    printf("c = %d\n", c);
    c = (a < b) ? a : b;
    printf("c = %d\n", c);
    c = (a == b) ? a : b;
    printf("c = %d\n", c);
    return 0;
}