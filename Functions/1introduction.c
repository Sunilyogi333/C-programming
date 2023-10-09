/*
Functions
- A function is a piece of code that performs some specific task.
- Reusuability and abstraction are the main achievements of using functions.
- There are two types of function in C programming.
i) Library functions
ii) User-defined functions

--> Library functions
- C language provides some predefind functions in respective header files known as library functions.
- These functions are used to perform some specific task.
- For example: 
   - printf() function is used to print some message on screen.
    - scanf() function is used to take input from user.
    - gets() function is used to take string input from user.
    - puts() function is used to print string on screen.
    - sqrt() function is used to find square root of a number.
    - pow() function is used to find power of a number.
    - rand() function is used to generate random number.
    - exit() function is used to exit from program.
    - etc.

--> User-defined functions
- User-defined functions are the functions which are created by user at the time of writing program.
- The functions created by programmer according to his/her requirements are known as user-defined functions.

Syntax of user-defined function
return_type function_name(parameter list)
{
    body of the function
}

- return_type: It specifies what type of value a function returns.
- function_name: It is the name of the function.
- parameter list: It specifies the list of parameters passed to the function.
- body of the function: It contains the definition of the function.

--> Elements of function
- There are four elements of function.
i) Function declaration
ii) Function definition
iii) Function call

i) Function declaration / Function prototype
- Function declaration tells the compiler about the function name, return type and parameters.
- It is also known as function prototype.
- It is optional.
- Function Prototype occurs above the main function.
- It tell compiler the return type of function and the type of argument the function takes.
- It is used to check the type of argument passed to the function and return type of function.

Syntax of function declaration
return_type function_name(argument list);
Example:
int addition(int a, int b);
or 
int addition(int, int);
-The function name is addition.
-It takes two arguments of type int.
-It returns an integer value.

ii) Function definition
- Function definition contains the actual body of the function.
- It is also known as function body.
- It is mandatory.
- Function definition contains the block of code to perform specific task.

Syntax of function definition
return_type function_name(argument list)
{
    body of the function
}

iii) Function call
- Function call is the process of calling a function.
- It is also known as function invocation.
- It is mandatory.
- Program control is transferred to the called function during function call.
- Function can be called anywhere in the program as many time as required.

Syntax of function call
function_name(argument list);
Example:
addition(a, b);
*/