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
### Bitwise AND `&`
The bitwise AND operator `&` compares the corresponding bits of two operands. The resulting bit is set to 1 only if both bits are 1; otherwise, it is set to 0.. ⤵️ 
```
   0100 // binary representation of 4
 & 0111 // binary representation of 7
--------
   0100 // result => 4 & 7 = 4 (Binary: 0100)
```
### Bitwise OR `|`  
The bitwise OR operator `|` Compares corresponding bits of the operands and returns a new value where each bit position is set to 1 if either the corresponding bit in the first number or the second number is 1. Otherwise, if both bits are 0, the result will also have 0 at that position. ⤵️ 
```
   0001 // decimal: 1
OR 0010 // decimal: 2
--------
   0011 // result => 1 | 2 = 3 (Binary: 0011)
```  
### Bitwise XOR `^`  
The bitwise XOR operator `^` performs a bitwise OR operation on each corresponding bit of two operands. The resulting bit is set to 1 if the two bits being compared are different (one is 0 and the other is 1); otherwise, it is set to 0 if the bits are the same (both 0 or both 1). ⤵️
```
   0101 // decimal: 5
 ^ 0011 //decimal: 3
--------
   0110 // result => 5 ^ 3 = 6 (Binary: 0110)
```
### Bitwise NOT `~`  
It is a unary operator that compliments each bit one by one. It flips the bits of its operand. Each 0 is converted to 1, and each 1 is converted to 0. ⤵️  
```
~ 0111 // decimal: 7
------
  1000 // result => ~ 7 = 8 (Binary: 1000)
```
### Bitwise left `<<` and right `>>` shift  
Syntax: `value << n` The left shift operator shifts the bits of the value to the left by `n` positions and fills the vacant bit positions on the right with zeroes.  
Syntax: `value >> n` The right shift operator shifts the bits of the value to the right by `n` positions. it fills the vacant bit positions on the left with zeroes. 
