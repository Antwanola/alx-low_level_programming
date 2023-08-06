#!/bin/bash

gcc -c *.c

ar -rcs liball.a *.o

echo "static library created and it is called liball.a"
