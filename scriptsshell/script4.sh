#!/bin/bash
var=3
if [ "$#" -ge "$var" ]; then
	echo "hay suficientes argumentos"
else
	echo "se requieren al menos $var argumentos"
fi
