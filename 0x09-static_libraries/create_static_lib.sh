#!/bin/bash
#1. Use GCC to Compile the Object Code first
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

#2. Archive or Create the Static Library file
ar -rc liball.a *.o
