# More C - MAlloc_Free  
This is the continuation of our [previous](https://github.com/El-gibbor/alx-low_level_programming/tree/master/0x0B-malloc_free) project on `C` `malloc` and `free`, now we have a deeper delve into these concepts, futher exploring other functions like `calloc`, `realloc` and `exit`.  
## Core Objectives 
The project aims at giving one a good knowledge and graps of the above mentioned concepts and its pratical implementation in different case scenerios.   
* Understanding how to use the `exit` function: The exit function is a part of the C standard library and is used to terminate the program execution. It allows you to explicitly exit from your program at any point, bypassing any remaining code. The exit function takes an integer argument, which represents the exit status of the program. By convention, a return value of 0 indicates successful program execution, while non-zero values indicate errors or exceptional conditions  
* `calloc` and `realloc` functions:  
    * Calloc: `void *calloc(size_t nitems, size_t size)` allocates the requested memory and returns a pointer to it. The difference in `malloc` and `calloc` is that `malloc` does not set the memory to zero where as `calloc` sets allocated memory to zero.  
    * Realloc: `void *realloc(void *ptr, size_t size)`The realloc function is used to resize the memory block previously allocated with malloc, calloc, or realloc itself. It takes two arguments: a pointer to the previously allocated memory block and the new size in bytes.  
