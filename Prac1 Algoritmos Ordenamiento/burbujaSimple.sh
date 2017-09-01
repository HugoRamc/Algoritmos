#!/bin/bash

gcc burbujaSimple.c tiempo.c -o burbujaSimple

./burbujaSimple 100 < numeros10millones.txt > salidaBurbujaSimple.txt

./burbujaSimple 1000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 5000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 10000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 50000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 100000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 200000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 400000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 600000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 800000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 1000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 2000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 3000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 4000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 5000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 6000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 7000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 8000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 9000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
./burbujaSimple 10000000 < numeros10millones.txt >> salidaBurbujaSimple.txt
