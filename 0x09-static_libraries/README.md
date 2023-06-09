# C - Static_libraries  
## Overview
The aim of this project is to provide a comprehensive guide on working with C static libraries. By the end of the project, it is expected to have gained a deep understanding of static libraries, including their purpose, creation process, and usage. Additionally, become familiar with essential tools such as `ar`, `ranlib`, and `nm` commonly used in managing static libraries.  
## Core Objectives  
Upon completing this project, one will be able to:  

* Explain the concept of a static library and understand its purpose in C programming.
* Understand how static libraries work and their advantages.
* Create a static library from a collection of C source files.
* Use the ar command to manage static libraries, including creating, extracting, and appending object files.
* Utilize the ranlib command to generate an index for random access in a static library.
* Understand the purpose of the `nm` command and how it can be used to analyze symbols in a static library.  
## What exactly is a Static Library?  
A static library, also known as an archive, is a collection of pre-compiled object files bundled together. It contains a set of functions, variables, and other code that can be linked into a program at compile-time. Static libraries offer several advantages, such as:  
* __Encapsulation:__ Packaging related functions and data into a single file.
* __Code Reusability:__ Allowing multiple programs to reuse the same code.
* __Performance:__ Eliminating the need to load libraries at runtime, resulting in faster execution.  
## Creating a Static Library
To create a static library, follow these general steps:  
1. Write the desired functionality in separate C source files.  
2. Compile each source file into an object file using the gcc compiler:   
    * `gcc -c elgibbor.c` For multiple files, you can use this command `gcc -c *.c` to compile all of them at once. but ensure it is only the C files you intend to compile that are in your current directory because this commands compiles every file with `.c` extention in that directory.<br>
##### Use the `ar` command to create an archive file from the object files:  
`ar rcs myLibrary.a elgibbor.o elgibbor.o`. To create an archive for multiple object files, use this command `ar rcs myLibrary.a *.o`
  
_Thats it! a static library is created._  

