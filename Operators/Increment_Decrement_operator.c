/*
Increment and Decrement Operator

Increment Operator: ++, increases the value of operand by 1
Decrement Operator: --, decreases the value of operand by 1

pre-increment: ++a, increases the value of operand by 1 and then returns the incremented value
post-increment: a++, returns the value of operand and then increases the value of operand by 1

pre-decrement: --a, decreases the value of operand by 1 and then returns the decremented value
post-decrement: a--, returns the value of operand and then decreases the value of operand by 1

*/
//Example:
#include <stdio.h>
int main(){
    int a = 5, b = 5, c = 5, d = 5;
    printf("Pre-increment: a=  %d\n", ++a); // 6
    printf("Post-increment: b = %d\n", b++); // 5
    printf("after post increment: b = %d\n\n", b); // 6
    printf("Pre-decrement: c = %d\n", --c); // 4
    printf("Post-decrement: d = %d\n", d--); // 5
    printf("after post decrement: d = %d\n", d); // 4
    return 0;
}