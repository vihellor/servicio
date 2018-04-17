#!/bin/bash
#
var=1
if [ "$#" -eq "$var" ]; then
	#echo "hay suficientes argumentos"
	val=`ps -fea | tr -s ' ' | cut -d ' ' -f8 | egrep "$1\$" | uniq`
	#echo $val
	ps -fea | tr -s ' ' | egrep $val | cut -d ' ' -f2,8
else
	echo "el programa sólo acepta 1 argumento"
fi
