/*
Special Operators: 
Comma(,), sizeof(), pointer(*), address(&), ternary(?:), dot(.), arrow(->) ...
- These operators are used to perform special operations.
*/

// Example: Find Size of each data type usign sizeof() operator .
#include <stdio.h>
int main(){
    printf("Size of Integer %ld bytes", sizeof(int));
    printf("\nSize of Float %ld bytes", sizeof(float));    
    printf("\nSize of Double %ld bytes", sizeof(double));
    printf("\nSize of Character %ld bytes", sizeof(char));
    printf("\nSize of Long Integer %ld bytes", sizeof(long int));
    printf("\nSize of Long Double %ld bytes", sizeof(long double));
    printf("\nSize of Long Long Integer %ld bytes", sizeof(long long int));
    printf("\nSize of Short Integer %ld bytes", sizeof(short int));
    printf("\nSize of Unsigned Integer %ld bytes", sizeof(unsigned int));
    printf("\nSize of Unsigned Long Integer %ld bytes", sizeof(unsigned long int));
    printf("\nSize of Unsigned Long Long Integer %ld bytes", sizeof(unsigned long long int));
    printf("\nSize of Unsigned Short Integer %ld bytes", sizeof(unsigned short int));
    printf("\nSize of Unsigned Character %ld bytes", sizeof(unsigned char));
    printf("\nSize of Void %ld bytes", sizeof(void));
    printf("\nSize of Void Pointer %ld bytes", sizeof(void *));
    printf("\nSize of Long Double Pointer %ld bytes", sizeof(long double *));
    printf("\nSize of Long Integer Pointer %ld bytes", sizeof(long int *));
    printf("\nSize of Long Long Integer Pointer %ld bytes", sizeof(long long int *));
    printf("\nSize of Short Integer Pointer %ld bytes", sizeof(short int *));
    printf("\nSize of Unsigned Integer Pointer %ld bytes", sizeof(unsigned int *));
    printf("\nSize of Unsigned Long Integer Pointer %ld bytes", sizeof(unsigned long int *));
    printf("\nSize of Unsigned Long Long Integer Pointer %ld bytes", sizeof(unsigned long long int *));
    printf("\nSize of Unsigned Short Integer Pointer %ld bytes", sizeof(unsigned short int *));
    printf("\nSize of Unsigned Character Pointer %ld bytes", sizeof(unsigned char *));
    return 0;
}