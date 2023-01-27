#include<stdio.h>

int main()
{
    int l;
    printf("Enter the value of l \n");
    scanf("%d", &l);
    for(int n = 0; n<l; n++)
    printf("%d \n", n+1);
    return 0;
}