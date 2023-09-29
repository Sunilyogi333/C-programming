//Write a C program to show structure with pointer.
#include<stdio.h>
struct Person{
    char name[100];
    int ctn;
};
int main(){
    struct Person *P, per;
    P=&per;
    printf("Enter name:");
    scanf("%s",&P->name);

    printf("Enter citizenship number:");
    scanf("%d",&P->ctn);

    printf("Name: %s",P->name);
    printf("\nCitizenship number: %d",P->ctn);
}
