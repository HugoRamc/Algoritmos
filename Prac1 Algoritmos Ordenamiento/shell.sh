#!/bin/bash

gcc shell.c tiempo.c -o shell

./shell 100 < numeros10millones.txt


./shell 200 < numeros10millones.txt