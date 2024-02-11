#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c"); for file in $c_files; do gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"; done && gcc -shared -o liball.so *.o && rm *.o; echo "Dynamic library liball.so created successfully."
