/*
--> The C preprocessor 
- The C preprocessor is a exactly what its name implies. It is a program that processes our 
  source program before it is passed to the compiler. Preprocessor commands (often known as directives)
  form what can almost be considered a language within a language. 
- We can certainly write C programs without using any preprocessor directives, but they can make our 
  programs more readable and maintainable and preprocessors is such a great convinience that virtually
  all  C programmers rely on it.
- The preprocessor is not part of the C language, but is a separate program that runs before the compiler.
  The preprocessor directives are indicated by a # at the beginning of the line. The preprocessor directives 
  are executed before the compilation process begins.
- The preprocessor directives are executed before the compilation process begins.

--> Features of preprocessor
- The preprocessor is a text substitution tool and it instructs the compiler to do required pre-processing 
  before the actual compilation. We can use the preprocessor directives anywhere in the program and it is 
  not necessary to use them at the beginning of the program.

- The directives can be placed anywhere in a program but are most often placed at the beginning of a program,
  before the first function definition.

- The preprocessor directives are executed before the compilation process begins. The preprocessor directives
  are indicated by a # at the beginning of the line. The preprocessor directives are executed before the compilation
  process begins.

--> Note that if the source code is stored in a file PR1.C then the explanded source code gets stored in 
    file PR1.I. When this expanded source code is complied the object code gets stored in PR1.OBJ.
    When this object code is linked with object code of library functions the resultant executable code gets
    stored in PR1.EXE.

*/

/*
--> Preprocessor Directives
- Any statement that begins with # symbol is known as preprocessor directives. These are the special 
  instruction which are executed before code passes through the compilation process.

  There are 4 types of preprocessor directives:
    1. Macro expansion directives
    2. File inclusion directives
    3. Conditional compilation directives
    4. Miscellaneous directives
*/
