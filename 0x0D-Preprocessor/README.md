![The-preprocessor-in-C-1](https://github.com/cloobTech/alx-low_level_programming/assets/121310192/c6b17f36-632c-492a-aaf6-02fd083e7106)
# C - preprocessor 
The C preprocessor is a tool that performs text substitution in our C source code before it goes through the compilation process. It helps us in writing more efficient and flexible code by allowing us to define macros and utilize them throughout our program. This project aims to provide an overview of the C preprocessor and cover the following objectives:  
* Understanding macros and their usage in C programming.
* Familiarizing ourself with commonly used predefined macros.
* Learning how to implement include guards to prevent multiple inclusion of header files.    
## Macros
Macros in C are used to define symbolic constants or to perform text substitution. They are created using the `#define` directive and can take arguments. When the macro is used in the code, it gets replaced with the corresponding value or code defined in the macro.  
```
#define PI 3.14159
#define MAX(x, y) ((x) > (y) ? (x) : (y))

/* Usage */
float radius = 5.0;
float circumference = 2 * PI * radius;

int a = 10, b = 20;
int max_value = MAX(a, b);
```  
In this example, the `PI` macro defines the value of` π`, and the `MAX` macro compares two values and returns the maximum. The macros are used in the code, and during preprocessing, they are substituted with the corresponding values or code.  
## Predefined Macros  
C provides several predefined macros that can be useful in our programs. These macros are automatically defined by the preprocessor and can vary across different compilers and platforms. Here are some commonly used predefined macros:  
* `__LINE__`: Represents the current line number as a decimal integer constant.  
* `__FILE__`: Represents the current file name as a string (path by which the preprocessor opened the file).  
* `__DATE__`: Represents the current date as a string in the format `Mmm dd yyyy`.  
* `__TIME__`: Represents the current time as a string in the format `hh:mm:ss`.  
## Include Guards  
Header files in C contain declarations, definitions, and macro definitions that need to be included in multiple source files. However, including the same header file multiple times can lead to duplicate definitions and compilation errors. To prevent this, it is essential to use include guards. Include guards are conditional statements that ensure a header file is only included once in a translation unit. Here's an example of it's implemented:  
```
#ifndef MAIN_H
#define MAIN_H

/* Header file contents go here */

#endif
```
In this example, `MAIN_H` is an arbitrary name that uniquely identifies the header file. When the header file is included for the first time, `MAIN_H` is not defined, and the `#ifndef` condition evaluates to true. The preprocessor then defines `MAIN_H` using `#define`. On subsequent inclusions of the header file, `MAIN_H` is already defined, and the contents within the `#ifndef` and `#endif` directives are skipped.  
