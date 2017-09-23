#!/bin/bash

gcc burbujaSimple.c tiempo.c -o burbujaSimple

./burbujaSimple 100000 < numeros10millones.txt
