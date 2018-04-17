#!/bin/bash

for i in `cat passwd | tr -d ' '`
do
	#echo "$i"
	echo "usuario:" `echo $i | cut -d ':' -f1`
	echo "contraseña:" `echo $i | cut -d ':' -f2`
	echo "uid:" `echo $i | cut -d ':' -f3`
	val=`echo $i | cut -d ':' -f4`
	#echo "gid: $val"
	echo "gid:" `egrep :$val: groups | cut -d ':' -f1` 
	echo "gecos:" `echo $i | cut -d ':' -f5`
	echo "home:" `echo $i | cut -d ':' -f6`
	echo "bash:" `echo $i | cut -d ':' -f7`
done


#cat passwd | tr -d ' ' | tr ':' ' ' | awk '{print "usuario: " $1 "\ncontrasenia: " $2 "\nuid: " $3 "\ngid: " $4 "\ngecos: " $5 "\nhome: " $6 "\nbash: " $7}'
#cat passwd | tr -d ' ' | tr ':' ' ' | awk '{print "usuario: " $1 "\ncontrasenia: " $2 "\nuid: " $3 "\ngid: " system("egrep :$4: groups | cut -d ':' -f1") "\ngecos: " $5 "\nhome: " $6 "\nbash: " $7}'
#cat passwd | tr -d ' ' | tr ':' ' ' | awk '{ system("time) | getline d; print "\ngid: " , d }'

