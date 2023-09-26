/*
Continue Statement
-The continue statement is used inside a loop when the compiler finds the continue statement, 
it will skip all the following statement in the loop and resumes the loop.
*/
#include <stdio.h>

int main()
{
    int i;
    for (i=1; i<=5; i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}