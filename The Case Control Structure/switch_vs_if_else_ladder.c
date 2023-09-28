/*
There are some things that you simply cannot do with a switch.
These are:
a. A float expression cannot be tested using a switch.
b. Cases can never have variable expressions (for example it is wrong to say "case a+3:")
c. Multiple cases cannot use same expressions. Thus the following switch is illegal:

switch(a)
{
    case 3:
       ...
    case 1+2:
       ...
}
(a),(b) and (c) above may lead you to believe that these are obvious disadvantages with a switch,
especially since there weren't any such limitations with if-else. Then why use a switch at all?

For speed-switch works faster than an equivalent if-else ladder. How come? This is because the
compiler generates a jump table for a switch during compilation. As a result, during execution
it simply refers the jump table to decide which case should be executed, rather than actually
checking which case is satisfied. As against this, if-else are slower because they are evaluated
at execution time. A switch with 10 cases would work faster than an equivalent if-else ladder.

Also, a switch with 2 cases would work slower than if-else ladder.  Why? If the 10th case is
satisfied then jump would be referred and statements for the 10th case case would be executed.
As against this, in an if-else ladder 10 conditions would be evaluated at execution time, which 
makes it slow. Note that a lookup in the jump table is faster than evaluation of a condition, 
especially if the condition is complex.

If on the other hand the conditions in the if-else were simple and less in number then if-else would
work out faster than the lookup mechanism of a switch. Hence a switch with two cases would work slower
than an equivalent if-else. Thus, you as a programmer should take a decision which of the two should be
used when.
*/