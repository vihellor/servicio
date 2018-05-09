#!/usr/bin/python
import sys
import math
import random

appendMe = 'Col1 Col2 Col3'



def generate():
	for j in range(0,30):
		p = "jess" + str(j) + ".txt"
		appendFile = open(p,'a')
		appendFile.write(appendMe)
		lim = random.randint(10, 40)
		for i in range(lim):
			x = "\n" + str (random.randint(0, 70)) + " " + str (random.randint(0, 70)) + " " + str (random.randint(0, 70))
			appendFile.write(x)
		appendFile.close()

generate();