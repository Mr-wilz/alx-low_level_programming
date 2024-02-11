#!/bin/bash

gcc -c *.c -fpic && gcc *o liball.so && echo "Success."
