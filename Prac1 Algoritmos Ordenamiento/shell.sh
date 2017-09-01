#!/bin/bash

gcc shell.c tiempo.c -o shell

./shell 100 < numeros10millones.txt > salidaShell.txt

./shell 1000 < numeros10millones.txt >> salidaShell.txt
./shell 5000 < numeros10millones.txt >> salidaShell.txt
./shell 10000 < numeros10millones.txt >> salidaShell.txt
./shell 50000 < numeros10millones.txt >> salidaShell.txt
./shell 100000 < numeros10millones.txt >> salidaShell.txt
./shell 200000 < numeros10millones.txt >> salidaShell.txt
./shell 400000 < numeros10millones.txt >> salidaShell.txt
./shell 600000 < numeros10millones.txt >> salidaShell.txt
./shell 800000 < numeros10millones.txt >> salidaShell.txt
./shell 1000000 < numeros10millones.txt >> salidaShell.txt
./shell 2000000 < numeros10millones.txt >> salidaShell.txt
./shell 3000000 < numeros10millones.txt >> salidaShell.txt
./shell 4000000 < numeros10millones.txt >> salidaShell.txt
./shell 5000000 < numeros10millones.txt >> salidaShell.txt
./shell 6000000 < numeros10millones.txt >> salidaShell.txt
./shell 7000000 < numeros10millones.txt >> salidaShell.txt
./shell 8000000 < numeros10millones.txt >> salidaShell.txt
./shell 9000000 < numeros10millones.txt >> salidaShell.txt
./shell 10000000 < numeros10millones.txt >> salidaShell.txt
