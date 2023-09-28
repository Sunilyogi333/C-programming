/*
***Menu driven Programs***
a.Check perfect number
b.Sum of odd & even upto n terms
c.Fibonacci series upto n terms
d.exit
*/
#include<stdio.h>
#include<stdlib.h>
void perfect_number();
void sum_odd_even();
void fibonacci_series();
int main()
{
    char choice , ch;
    do
    {
        printf("\n***Menu driven Programs***\n");
        printf("a.Check perfect number\n");
        printf("b.Sum of odd & even upto n terms\n");
        printf("c.Fibonacci series upto n terms\n");
        printf("d.exit\n");

        printf("Enter your choice: ");
        scanf("%c", &choice);
        
        switch (choice)
        {
        case 'a':
            perfect_number();
            break;
        
        case 'b':
            sum_odd_even();
            break;

        case 'c':
            fibonacci_series();
            break;

        case 'd':
            exit(0);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
        printf("Do you want to continue(y/n): ");
        scanf(" %c",&ch);
        getchar();
    } while (ch=='y' || ch=='Y');
    return 0;
}

void perfect_number()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }
}

void sum_odd_even()
{
    int n,i,osum=0, esum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum=osum+i;
        }
    }
    printf("Sum of odd numbers upto %d terms is %d\n",n,osum);
    printf("Sum of even numbers upto %d terms is %d\n",n,esum);
}

void fibonacci_series()
{
    int n,i,a=0,b=1,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms is: ",n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}
