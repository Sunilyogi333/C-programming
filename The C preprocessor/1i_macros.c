/*
--> Macro expansion directives
- A macro is a segment of code which is replaced by the value of macro. Macro is defined by
  using #define directive. 

- The syntax of #define directive is as follows:
    #define macro_name replacement_text

- The macro_name is any valid C identifier and the replacement_text can be any valid C expression.
  The replacement_text can be a constant, variable, expression or a statement. The replacement_text
  can also be a function call.
- The macro_name is not terminated by a semicolon.

There are two types of macros:
    1. Object like macros
    2. Function like macros

--> Object like macros
- The object like macro is an identifier that is replaced by a value. 
- It is widely used to represent numeric constant.

- The syntax of object like macro is as follows:
    #define macro_name replacement_text

*/
// for example:
    #include <stdio.h>
    #define PI 3.14
    #define start {
    #define end }
    #define MUL *
    int main() start
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    area = PI MUL r MUL r;
    printf("Area of circle = %f\n", area);
    end
/*- In the above example, the PI is a macro which is replaced by 3.14. The start and end are also macros
    which are replaced by { and } respectively. The MUL is also a macro which is replaced by *.
    The macro PI is used to represent the value of PI. The macro start and end are used to represent
    the starting and ending of a block of code. The macro MUL is used to represent the multiplication
    operator. The macro PI is used to represent the value of PI. The macro start and end are used to
    represent the starting and ending of a block of code. The macro MUL is used to represent the
    multiplication operator.
*/