/* 1.Documentation/Comments: IT is the part of the where the programmer 
   gives the details associated with the program.
   for example:
   Name:
   Roll no:
   Faculty:
*/

/* 2. Pre-processor Directives: This statement begins with # symbol.
   It directs 'C' compiler to include header files and symbolic contant into the C program.
*/
#include<stdio.h> //Link to input output functions

/* 3. Global Declarations: This part of the program contains the declaration of variables.
   This part of the code incudes global variables and constants that are used in the program.
   These variables can be accessed by any function in the program.
 */
int main() //Function main begins here
{
    /* 4. Local Declarations: This part of the program contains the declaration of variables.
       This part of the code incudes local variables and constants that are used in the program.
       These variables can be accessed only by the function in which they are declared.
    */
    printf("Hello World"); //Function to print the string on the screen
    return 0; //Return statement
}
/*
  5. Sub-program Section: All user defined functions are defined in this section of the program.
*/