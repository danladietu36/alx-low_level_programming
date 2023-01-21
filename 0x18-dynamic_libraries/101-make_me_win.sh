#!/bin/bash
gcc -fpic -shared -o lib.so *.c
LD_PRELOAD=/$mss/lib.so
