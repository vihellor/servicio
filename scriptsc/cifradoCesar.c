#include <stdio.h>
//#include <string.h>

// main() is where program execution begins.
int main() {
	char s[100];
	printf("Escribe la palabra a anlizar\n");
	gets(s);
	printf("Selecciona el numero a considerar\n");
	int num;
	scanf("%d",&num);
	
	int c = 0;
	

	while (s[c] != '\0') {
		//printf("%d\n", s[c]);
		if(s[c] != ' '){
			if((s[c] + num) > 122)
				printf("%c", s[c] + num-26);
			else if((s[c] + num) < 97)
				printf("%c", s[c] + num+26);
			else 
				printf("%c", (s[c] + num));
		}
		
		c++;
	}
	printf("\n");
	return 0;
}