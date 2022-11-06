#!/bin/bash
gcc -c ./*.c
ar -rc liball.a
ranlib liball.a

