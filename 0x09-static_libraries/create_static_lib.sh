#!/bin/bash
# script that creates a static libraries with all the .c source files in the current directory

gcc -c ./*.c
ar -rc liball.a ./*.o
ranlib liball.a

