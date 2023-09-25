/*
-It is the process of converting on data type into another data type 
 by the user according to the requirement.
*/
// Example for Explicit type casting
#include <stdio.h>
int main()
{
    int a=2,b=10;
    float c;
    c=a/b;
    
    printf("Value before Type casting:%f\n",c);
    c=(float)a/b;
    printf("Value after Type casting:%f\n",c);
    return 0;
}