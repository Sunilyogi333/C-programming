/*
- Actual arguments
- The arguments which are passed to the function at the time of function call are called actual arguments.
- The actual arguments are defined in the calling function.
- The actual arguments are used to initialize the formal arguments.
- The arguments that are passed during function call are known as actual arguments.
Example:
    addition(a, b);

Formal arguments
- The arguments which are declared in the function definition are called formal arguments.
- The formal arguments are local to the function.
- The formal arguments are initialized with the values of actual arguments when the function is called.
- The variable that are declared in function definition is known as formal arguments.
- The value of actual argument gets copied in formal argument. So that any change made in formal
  argument is not reflected in actual argument.
*/
//Example:
#include<stdio.h>
void modify(int, int);
int main()
{
    int a = 10, b = 20;
    modify(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
void modify(int x, int y) // x and y are formal arguments
{
    x = x * 10;
    y = y * 10;
    printf("x = %d, y = %d\n", x, y);
}