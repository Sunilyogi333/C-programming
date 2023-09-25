//Write a C program to swap any two integer numbers using call by reference;
#include<stdio.h>
int swap(int *, int *);
int main(){
   int x,y;
   printf("Enter two numbers: ");
   scanf("%d%d",&x,&y);
   printf("Before swap \t x = %d\t,y = %d",x,y);
   swap(&x,&y);
   printf("\n After swap \t x = %d\t,y = %d",x,y);
   return 0;
}
int swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}