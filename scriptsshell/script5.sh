#!/bin/bash

if [ 'linea' = "$1" ]; then
	echo "son iguales"
fi

if [ 'linea' != "$1" ]; then
	echo "son diferentes"
fi

if [ 'linea' <> "$1" ]; then
	echo "está raro"
fi
