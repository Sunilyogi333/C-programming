#include<stdio.h>
#include<string.h>
int main()
{
    #include"check.h"
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}