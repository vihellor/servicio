#include <stdio.h>
//#include <string.h>

// main() is where program execution begins.
int main() {
	printf("Escribe la palabra a intentar descifrar con cesar\n");
	char s[100];
	int c = 0;
	gets(s);
	int num;
 	for (int i = 0; i < 26; ++i){
 		num = i;
 		c = 0;
 		printf("%d ", num);
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
		printf("\n");
 	}
	
	return 0;
}