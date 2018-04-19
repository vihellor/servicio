#include <stdio.h>
//#include <string.h>

// main() is where program execution begins.
int main() {
	printf("escriba el texto a sustituir\n");
	char s[1000];
	gets(s);
	char pro[30];
	pro[0] = 'x'; //a
	pro[1] = 't'; //b
	pro[2] = 'w'; //c
	pro[3] = 'd'; //d
	pro[4] = 'v'; //e
	pro[5] = 'q'; //f
	pro[6] = 'z'; //g
	pro[7] = 'l'; //h
	pro[8] = 's'; //i
	pro[9] = 'o'; //j
	pro[10] = 'n'; //k
	pro[11] = 'b'; //l
	pro[12] = 'a'; //m
	pro[13] = 'u'; //n
	pro[14] = 'g'; //o
	pro[15] = 'h'; //p
	pro[16] = 'k'; //q
	pro[17] = 'e'; //r
	pro[18] = 'p'; //s
	pro[19] = 'y'; //t
	pro[20] = 'r'; //u
	pro[21] = 'c'; //v
	pro[22] = 'i'; //w
	pro[23] = 'f'; //x
	pro[24] = 'm'; //y
	pro[25] = 'j'; //z
	
	char s2[1000];
	int c = 0;
	while (s[c] != '\0') {
		if(s[c] >= 'a' && s[c] <= 'z'){
			s2[c] = pro[s[c]-'a'];
		}
		else{
			s2[c] = s[c];
		}
		printf("%c", s2[c]);
		c++;
	}
	printf("\n");
	return 0;
}