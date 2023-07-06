![Screenshot 2023-07-06 132647](https://github.com/softlink2/alx-low_level_programming/assets/121310192/82e30e10-8b61-4475-bf1f-e06d8b36b1b3)
# 0x14-bit_manipulation
From the task exercises in this project, we explored and implemented how to manipulate bits and use bitwise operators. Bit manipulation involves performing operations on individual bits of binary data. It is a powerful technique used for various purposes, such as optimizing code, implementing data structures, and working with low-level operations.  
## Bitwise Operators  
C provides bitwise operators that enable the manipulation of individual bits within a value. The following bitwise operators are commonly used:
* __Bitwise AND `&`__: Performs a bitwise AND operation between two values.
* __Bitwise OR `|`__: Performs a bitwise OR operation between two values.
* __Bitwise XOR `^`__: Performs a bitwise exclusive OR operation between two values.
* __Bitwise NOT `~`__: Performs a bitwise complement operation on a value, flipping all its bits.
* __Bitwise Shift Left `<<`__: Shifts the bits of a value to the left by a specified number of positions.
* __Bitwise Shift Right `>>`__: Shifts the bits of a value to the right by a specified number of positions.  
#### Bitwise AND `&`
The bitwise AND operator `&` compares the corresponding bits of two operands and produces a result where each bit is set if both corresponding bits are set. Otherwise, the bit is cleared. ⤵️ 
```
unsigned int a = 5;      // 0101 in binary
unsigned int b = 3;      // 0011 in binary
unsigned int result = a & b;   // 0001 in binary
```
In the above example, the result is 1 because the binary representation of `a` and `b` has only the rightmost bit set.

#### Bitwise OR `|`  
The bitwise OR operator `|` compares the corresponding bits of two operands and produces a result where each bit is set if at least one of the corresponding bits is set. ⤵️ 
```
unsigned int a = 5;      // 0101 in binary
unsigned int b = 3;      // 0011 in binary
unsigned int result = a | b;   // 0111 in binary
```
From the above example, the result is 7 because the binary representation of `a` and `b` has bits 0, 1, and 2 set.  
#### Bitwise XOR `^`  
The bitwise XOR operator `^` compares the corresponding bits of two operands and produces a result where each bit is set if only one of the corresponding bits is set. ⤵️
```
unsigned int a = 5;      // 0101 in binary
unsigned int b = 3;      // 0011 in binary
unsigned int result = a ^ b;   // 0110 in binary
```
