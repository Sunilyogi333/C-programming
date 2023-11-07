/*
Bitwise Operator: It is used for manupulation of data at bit level.
-Bitwise operators are used to perform bit-level operations on (binary) numeric values at the level of their individual bits.

Operator    Name            Description
&           AND             Sets each bit to 1 if both bits are 1
|           OR              Sets each bit to 1 if one of two bits is 1
^           XOR             Sets each bit to 1 if only one of two bits is 1
~           NOT             Inverts all the bits
<<          Zero fill left  Shifts left by pushing zeros in from the right and let the leftmost bits fall off
>>          Signed right    Shifts right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off
*/
/*
Example: Let us suppose the bitwise AND operation of two integers 12 and 25.

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)
*/
#include <stdio.h>
int main() {

    int a = 12, b = 25;
    printf("Output = %d\n", a & b);

    return 0;
}