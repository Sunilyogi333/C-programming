/*
a. Global variable
- The variable that are declared outside the function block is known as Global varaible. 
- Global variable can be accessed by any function in the program.
*/
//Example:
#include<stdio.h>
void modify();
int i = 10, a = 20;  // Global variable
int main()
{
    i= i*10;
    a = a*10;
    printf("i = %d and a = %d", i,a);
    modify();
    printf("\nAfter calling modify function\n");
    printf("i = %d and a = %d\n", i,a);
    return 0;
}
void modify()  
{
    i++; 
    a++;
}