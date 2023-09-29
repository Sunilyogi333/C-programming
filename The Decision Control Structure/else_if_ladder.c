/*
else if ladder
- else-if ladder is used to check multiple conditions.
- else-if ladder are executed from top to buttom.
- As soon as one of the condition controlling the if statement is true, the statement
  associated with that if statement is executed and the rest else-if is bypassed.
syntax:
if (condition_1)
{
    //code
}
else if (condition_2)
{
    //code
}
else if (condition_3)
{
    //code
}
else if (condition_n)
{
    //code
}
else
{
    //code
}
*/
//WAP to find maximum of 3 numbers using else-if ladder.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is maximum\n",a);
    }
    else if(b>c)
    {
        printf("%d is maximum\n",b);
    }
    else
    {
        printf("%d is maximum\n",c);
    }
    return 0;
}