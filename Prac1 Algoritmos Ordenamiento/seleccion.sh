#!/bin/bash

gcc seleccion.c tiempo.c -o seleccion

./seleccion 100 < numeros10millones.txt > salidaSeleccion.txt

./seleccion 1000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 5000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 10000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 50000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 100000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 200000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 400000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 600000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 800000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 1000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 2000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 3000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 4000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 5000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 6000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 7000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 8000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 9000000 < numeros10millones.txt >> salidaSeleccion.txt
./seleccion 10000000 < numeros10millones.txt >> salidaSeleccion.txt
