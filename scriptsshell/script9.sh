#!/bin/bash

for i in `ls -a /etc/`
do
	#echo $i
	#echo $?
	#test -f $i
	##if [ "$?" -eq "0" ]; then
	if [ ! -d $i ]; then
		#echo $i
		echo `sha256sum /etc/$i 2>/dev/null`
	fi
done