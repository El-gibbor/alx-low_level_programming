![c-pointer-function-variable-pointer](https://github.com/cloobTech/alx-low_level_programming/assets/121310192/50aee0e5-11f4-4829-88d2-85df7f529b03)
# C - Function pointers  
Function pointers are a powerful feature in C programming that allows us to store and manipulate references to functions. In C, functions are treated as first-class citizens, which means we can assign function addresses to variables and pass them as arguments to other functions. Function pointers facilitate this capability.  
## Talking about Function Pointers. What are they?
In C, a function pointer is a variable that holds the memory address of a function. It provides a means to indirectly invoke a function through the pointer. This allows for dynamic selection and invocation of functions based on runtime conditions or user-defined logic. and the core aim of this project exercise is to get us acquainted with the below learning objectives:  
* __How to Use Function Pointers:__ To use function pointers, we need to follow these steps:   
    * __Declare the function pointer:__ Declare a pointer variable that will store the function's address. The declaration involves specifying the function signature or prototype that the pointer will point to. `return_type (*function_pointer_name)(parameter_type1, parameter_type2, ...);`
    * __Assign the function's address to the pointer:__ Assign the address of the desired function to the function pointer variable. We can use the function name directly as the assignment. `function_pointer_name = &function_name;` Alternatively, you can assign the address directly without the & operator `function_pointer_name = function_name;`  
    * __Invoke the function through the pointer:__ We can use the function pointer to invoke the function by dereferencing the pointer and providing arguments if required. `(*function_pointer_name)(arg1, arg2, ...);` Alternatively, We can use the shorthand arrow notation `function_pointer_name(arg1, arg2, ...);`
## What Does a Function Pointer Hold?  
A function pointer holds the memory address of a function. It stores the location in virtual memory where the function's machine code resides. This address is the entry point from which the CPU starts executing the instructions of the function.  
In C, all functions have a fixed memory layout, which allows function pointers to accurately point to the correct function. The function pointer knows the size and layout of the function's parameters and return type, enabling it to correctly invoke the function and handle the stack frame.  
## Where Does a Function Pointer Point to in the Virtual Memory?  
A function pointer points to the starting address of the function's machine code in the virtual memory. In most modern computer architectures, including the x86 and x86-64 architectures, functions are typically stored in the code segment of the program's virtual memory.
The code segment is a region of memory reserved for executable instructions. When the program is loaded into memory, the code segment contains the compiled machine code of the program, including all the functions defined within it. Each function is assigned a specific memory address, and the function pointer holds the address of the desired function.    
## Resources  
[Function pointers in C/C++](https://www.youtube.com/watch?v=ynYtgGUNelE) - Mycodeschool (video)  
[Everything you need to know about pointers in c](https://boredzo.org/pointers/)  
[Pointers to Function](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
