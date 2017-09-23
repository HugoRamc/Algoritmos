#!/bin/bash
gcc burbujaOptimizada.c tiempo.c -o burbujaOptimizada

./burbujaOptimizada 100000 < numeros10millones.txt 