#!/bin/bash
#1. Use GCC to Compile the Object Code first
gcc -c *.c

#2. Archive or Create the Static Library file
ar rcs liball.a *.o
