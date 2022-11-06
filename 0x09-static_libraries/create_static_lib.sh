#!/bin/bash
# a script that creates a static library liball.a

gcc -c ./*.c
ar -rc liball.a ./*.o
ranlib liball.a *.o

