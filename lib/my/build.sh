#!/bin/bash

gcc -w -c *.c
ar rcs libmy.a *.o
