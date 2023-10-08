//WAP to input name of 5 students and display it.
#include<stdio.h>
int main()
{
    char name[5][50];
    int i;
    printf("Enter the names of 5 students:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d student name: ",i+1);
        fgets(name[i],sizeof(name[i]),stdin);
    }
    printf("The names of 5 students are:\n");
    for(i=0;i<5;i++)
    {
        printf("%s",name[i]);
    }
    return 0;
}