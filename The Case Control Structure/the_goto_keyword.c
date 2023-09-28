/*
The goto keyword
-Avoid goto keyword! They make a C programmer's life miserable. There is seldom a legitimate 
reason for using goto, and its use is one of the reasons that programs become unrealiable, unreadable,
and hard to debug. And yet many programmers find goto seductive.

-In a difficult programming situation it seems so easy to use a goto to take the control where you want. 
However, almost always, there is a more elegant way of writing the same program using if, for, while and
switch. These constructs are far more logical and easy to understand.

-The big problem with gotos is that when we do use them we can never be sure how we got to a certain point
in our code. They obscure the flow of control. So as far as possible skip them. You can always get the job 
done without them. Trust me, with good programming skills goto can always be avoided. This is the first and 
last time that we are going to use goto in this book. However, for sake of completeness of the book, the 
following program shows how to use goto.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int goals;
    printf("Enter the number or goals scored against India: ");
    scanf("%d",&goals);

    if(goals<=5)
    {
        goto sos;
    }
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye! adieu! to soccer");
        exit(0); //terminate program execution
    }
    sos:
    printf("To err is human \n");
    return 0;
}
/*
A few remarks about the program would make the things clearer.
-If the condition is satisfied the goto statement transfers control to the label 'sos', 
 causing printf() following sos to be executed.
-The label can be on a separate line or on the same line as the statement following it, a in,
 sos: printf("To err is human!");
-Any number of gotos can take the control to the same label.
-The exit() function is a standard library function which terminates the execution of the program.
 It is necessary to use this function since we don't want the statement
 printf("To err is human!")
 to get executed after execution of the else block.
*/