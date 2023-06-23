![yyyy](https://github.com/ehoneahobed/alx-low_level_programming/assets/121310192/ff46793a-8bf8-49eb-aa06-6305fafa536f)
# C - variadic_functions  
Variadic functions are functions that can accept a varying number of arguments. They are defined using the ellipsis `(...)` notation in the function declaration. Variadic functions are commonly used in scenarios where the number of arguments is unknown or can change at runtime.  
## Core Objectives:  
The exercises in this project aim to get us acquainted with the implementation of the below objectives:  
* __How to use `va_start`, `va_arg`, and `va_end` Macros__: To work with variadic functions, we need to use three macros defined in the `<stdarg.h>` header:
    * `va_start`: This macro initializes the variable argument list. It takes two parameters: the first is the `va_list` object, and the second is the last named parameter before the ellipsis (...).  
    * `va_arg`: This macro retrieves the next argument from the variable argument list. It takes two parameters: the `va_list` object and the type of the argument to be retrieved. It returns the value of the argument and advances the `va_lis` to the next argument.  
    * `va_end`: This macro cleans up the variable argument list. It takes one parameter, which is the `va_list` object.
   
* __Why and How to Use the const Type Qualifier__: The const type qualifier is used to declare variables whose values should not be modified. It ensures that the variable remains constant throughout its scope. Using const helps improve code readability, maintainability, and can prevent unintended modifications of variables.
When working with variadic functions, using the const type qualifier can provide additional safety and prevent unintended modifications of the arguments. By declaring variadic function parameters as const, you ensure that the function does not modify the argument values.
## Resources:  
[stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)  
[variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
