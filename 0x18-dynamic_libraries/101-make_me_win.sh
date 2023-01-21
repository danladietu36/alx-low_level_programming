#!/bin/bash
gcc -fpic -shared -o lib.so *.c
export LD_PRELOAD=/$PWD/lib.so .gm 98 8 10 24 75 9
