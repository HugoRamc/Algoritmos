#!/bin/bash
gcc burbujaOptimizada.c tiempo.c -o burbujaOptimizada

./burbujaOptimizada 100 < numeros10millones.txt > salidaBurbujaOptimizada.txt

./burbujaOptimizada 1000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 5000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 10000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 50000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 100000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 200000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 400000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 600000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 800000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 1000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 2000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 3000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 4000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 5000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 6000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 7000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 8000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 9000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
./burbujaOptimizada 10000000 < numeros10millones.txt >> salidaBurbujaOptimizada.txt
