![Command-Line-Arguments-in-C](https://github.com/softlink2/alx-low_level_programming/assets/121310192/9e938dd3-bbf7-4d14-94e1-ed81cb32d2f9)
# C - argc, argv
This project provides an overview of how to use command-line arguments in C programs. It covers the `argc` and `argv` parameters of the main function, which allow you to pass arguments to your program when executing it from the command line.  
## Command-Line Arguments  
Command-line arguments are additional inputs provided to a program when it is run from the command line. They allow you to pass information to the program at runtime without modifying the source code.

In C programming, you can access command-line arguments through the argc and argv parameters of the main function.  
* `argc` (argument count) is an integer that represents the number of command-line arguments passed to the program, including the program name itself.  
* `argv` (argument vector) is an array of strings (`char*`) that holds the actual command-line arguments.
