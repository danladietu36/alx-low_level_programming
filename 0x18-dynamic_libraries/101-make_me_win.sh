#!/bin/bash
gcc -fpic -shared -o lib.so *.c
export LD_PRELOAD=/$PWD/lib.so
