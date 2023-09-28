/*
The only programming situation in favour of using goto is when we want to take the control out of 
the loop that is contained in several other loops. The following program illustrates this.
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            for(k=1; k<=3; k++)
            {
                if(i==3 && j==3 && k==3)
                {
                    goto out;
                }
                else
                {
                    printf("%d%d%d\n",i,j,k);
                }
            }
        }
    }
    out:
    printf("Out of the loop at last!");
    return 0;
}
//The usage of the goto keyword should be avoided as it usually voilets the normal flow of execution.