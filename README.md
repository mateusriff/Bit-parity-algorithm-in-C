# Parity bit algorithm in C
This algorithm uses Bitwise Operators in C to check if the amount of 1-bits in a number passed as an argument is even. The number must be up to 7 bits in size, i.e., lesser than 128. If true, no changes are made to the number; else, it switches the 8th bit of the number to a 1-bit. 

As output, it prints two messages. The first one is the number passed as an argument followed by its binary form. If the number is 64, the first part of the output is:

``The informed number was: 64 -> 01000000`` 

The second message varies. If the number of 1-bits is odd, changes are made to the 8th bit and the number this new binary notation represents precedes it in the second part of the output:

``The new number is: 192 -> 11000000``

If the number of 1-bits is already even, as would be the case for 65, the second message will instead be:

``The number is already even`` 

## How to run it

Type ``./par (number)`` in the Command Line.
