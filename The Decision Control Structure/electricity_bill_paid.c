/*
Calculate the amount of electricity bill paid.
Input the unit and 
- for the first 100 units Rs8/unit
- for the first 200 units Rs12/unit
- beyond 200 units Rs15/unit
All users are charge with meter charge of Rs50.
*/
#include<stdio.h>
int main()
{
       int unit;
    float amt;
    printf("Enter the unit: ");
    scanf("%d", &unit);
    if(unit <= 100)
    {
        amt = unit * 8 + 50;
    }
    else if(unit <= 200)
    {
        amt = 100 * 8 + (unit - 100) * 12 + 50;
    }
    else
    {
        amt = 100 * 8 + 200 * 12 + (unit - 300) * 15 +50;
    }
    printf("The amount of electricity bill paid is Rs %.2f\n", amt);
    return 0;
}