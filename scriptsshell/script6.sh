#!/bin/bash

> groups
for i in `cat passwd`
do
	var=`echo "$i" | cut -d ':' -f4 ` 
	`egrep :$var: group >> groups`
done
cut groups -d ':' -f1 | sort | uniq -c
