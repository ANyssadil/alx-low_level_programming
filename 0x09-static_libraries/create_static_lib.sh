#!/bin/bash
ar -rc liball.a
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
