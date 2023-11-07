/*
Logical Operators: &&, ||, !
- These operators are used to perform logical operations on operands.
- C has following 3 logical operators:
    - && (Logical AND)
    - || (Logical OR)
    - ! (Logical NOT)

Logical AND (&&):
- The logical AND operator (&&) returns true if both operands are true and returns false otherwise.
Example:
    a =5, b = 5
    a > 0 && b > 0 // true
    a > 0 && b < 0 // false

Logical OR (||):
- The logical OR operator (||) returns true if any of the operands is true and returns false otherwise.
Example:
    a =5, b = 5
    a > 0 || b > 0 // true
    a > 0 || b < 0 // true
    a < 0 || b < 0 // false

Logical NOT (!):
- The logical NOT operator (!) returns true if the operand is false and returns false if the operand is true.
Example:
    a =5, b = 5
    !(a > 0) // false
    !(a < 0) // true
    !(a > 0 && b > 0) // false
    !(a > 0 || b > 0) // false
    !(a < 0 || b < 0) // true
*/