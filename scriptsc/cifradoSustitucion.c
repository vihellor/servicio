#include <stdio.h>
//#include <string.h>

// main() is where program execution begins.
int main() {
	int num = -6;
	char s[100];
	int c = 0;
	gets(s);
 
	while (s[c] != '\0') {
		//printf("%d\n", s[c]);
		if((s[c] + num) > 122)
			printf("%c", s[c] + num-26);
		else if((s[c] + num) < 97)
			printf("%c", s[c] + num+26);
		else 
			printf("%c", (s[c] + num));
		c++;
	}
	return 0;
}