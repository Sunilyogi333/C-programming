/*
Strings
String is an array of characters.
It is a derived data type.
It is a collection of characters enclosed within double quotes.
For example, "Hello World" is a string.
In C programming, a string is a sequence of characters terminated with a null character \0.

syntax: char str[size] = "string";

1. Static Initialization
char str[50] = "Ram";
OR
char str[50] = {'R', 'a', 'm', '\0'};
-null character is automatically added at the end of the string and it denotes the end of the string.

2. Dynamic Initialization
char str[50];
scanf("%s", str);
OR
gets(str);
OR
fgets(str, 50, stdin);

Note:

Whether scanf or fgets is better depends on the specific requirements and use cases of your program. Each function has its advantages and disadvantages:

1.fgets:
for example:
char input[100];
fgets(input, sizeof(input), stdin);

Advantages:

Safe for reading strings because it allows you to specify the maximum buffer size, preventing buffer overflows.
Reads entire lines of input, making it suitable for handling multi-word input.
Well-suited for reading text data, such as user input or data from text files.
Disadvantages:

Reads input as a string, so you may need additional parsing if you expect specific data types (e.g., integers or floats).
Appends a newline character ('\n') to the end of the input, which you may need to remove if it's not desired.
scanf:
2. scanf:
for example:
char input[100];
scanf("%s", input);
Advantages:

Provides precise control over input format, making it suitable for parsing specific data types like integers, floats, and characters.
Useful for reading and parsing structured input.
Disadvantages:

Can be less safe if not used carefully, as it doesn't limit input size by default, potentially leading to buffer overflows.
Handling newline characters ('\n') can be tricky, especially when reading strings.
In summary, if you need to read strings with unknown lengths or you're dealing with multi-word input, fgets is generally a safer choice. On the other hand, if you have specific formatting requirements and need to read different data types, scanf can be more suitable, but you should be cautious about buffer overflows and handle newline characters appropriately.
*/