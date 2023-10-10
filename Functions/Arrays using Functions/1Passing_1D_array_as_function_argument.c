/*
While passing array as function argument the base address of the array gets copied to the 
formal argument not the whole array. There are three ways to declare a function that receives array 
as a function argument.

syntax:
void funtion_name(int[size]);
void funtion_name(int[]);
void funtion_name(int*);

1. void fun(int arr[]);
2. void fun(int arr[10]);
3. void fun(int *arr);
*/