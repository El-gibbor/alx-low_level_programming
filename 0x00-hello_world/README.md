![download](https://user-images.githubusercontent.com/107848793/233779824-78d9c3f1-2437-413b-91be-4a9b5b8a4f5f.png)  
# 0x00-hello_world  
### Excerpt From my learning objective  
What happens if you run gcc main.c?
When we execute a C program through the GNU C Compiler (gcc), several things happen. The code is first preprocessed, which eliminates any comments and inserts header file code and macro names are replaced with codes.  
With `gcc -E main.c`, we can see the result/output of this preprocessing stage.

This is subsequently passed to the compiler, which produces assembly code for `main.c`. After running `gcc -S main.c`, this would be produced as `main.s` by default. Depending on the CPU you're using, the assembly code generated may vary greatly.

gcc then compiles (or assembles) the source files to convert assembly code to object code. Object code is similar to machine code or binary code. This is the most basic level of programming detail that a programmer can see. We may produce object code with `gcc -c main.c`, which will generate a `main.o` file by default.

The linker is the final step, and it takes our object code and any library programs to create a single executable file. `a.out` is the name of the output executable file.
