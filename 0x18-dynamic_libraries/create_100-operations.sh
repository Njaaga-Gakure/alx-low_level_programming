#!/bin/bash
gcc -c -fPIC add.c sub.c div.c mul.c mod.c
gcc -shared -o 100-operations.so *.o
