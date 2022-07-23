#!/bin/bash
gcc -Wall -pedantic _Werror _Wextra -c *.c
ar rc liball.a *.c
