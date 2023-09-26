/*
Break Statement 
-The break statement is used inside loop or switch statement. When the compiler finds a 
 break statement inside a loop, it will avoid the loop and continue to execute statement followed by loop.
*/
//For example:
#include<stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d \n", i);
        
        if(i==4){
        break;
        }
        i++;

    }while(i<10);
    return 0;
}