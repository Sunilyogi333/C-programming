//WAP to count 'n' odd and even number using for loop
#include<stdio.h>
int main()
{
    int i,ecount=0,ocount=0,n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
    }
    printf("Total even number is %d \n", ecount);
    printf("Total odd number is %d \n", ocount);
    return 0;
}