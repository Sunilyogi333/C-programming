/*
b. local varaibles
- The varaible that are declared within a function block is knnow as local varaible.
- Local varaible can be accessed only within the function in which they are declared.
*/
//Example:
#include<stdio.h>
void modify();
int main()
{
    int a=10, i=20; // Local variable
    printf("i = %d and a = %d", i,a);
    modify();
    printf("\nAfter calling modify function\n");
    printf("i = %d and a = %d\n", i,a);
    return 0;
}
void modify()  
{
    int c= 20; // Local variable
    printf("\nc = %d", c);
    // i++; error as i is not declared in this function
    // a++; error as a is not declared in this function
}