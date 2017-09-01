#!/bin/bash

gcc insercion.c tiempo.c -o insercion

./insercion 100 < numeros10millones.txt > salidaInsercion.txt

./insercion 1000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 5000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 10000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 50000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 100000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 200000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 400000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 600000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 800000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 1000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 2000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 3000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 4000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 5000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 6000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 7000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 8000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 9000000 < numeros10millones.txt >> salidaInsercion.txt
./insercion 10000000 < numeros10millones.txt >> salidaInsercion.txt
