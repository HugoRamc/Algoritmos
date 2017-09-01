#!/bin/bash

gcc Arbol.c tiempo.c -o Arbol

./Arbol 100 < numeros10millones.txt > salidaArbol.txt

./Arbol 1000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 5000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 10000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 50000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 100000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 200000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 400000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 600000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 800000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 1000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 2000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 3000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 4000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 5000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 6000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 7000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 8000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 9000000 < numeros10millones.txt >> salidaArbol.txt
./Arbol 10000000 < numeros10millones.txt >> salidaArbol.txt
