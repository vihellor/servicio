#include <stdio.h>
//#include <string.h>

int main() {
	char s1[100],s2[100],s3[100];
	printf("Escribe la primer palabra\n");
	gets(s1);
	printf("Escribe la segunda palabra\n");
	gets(s2);
 	int c = 0;
 	//printf("%d\n", s1[c]);
	while (s1[c] != '\0' && s2[c] != '\0') {
		s3[c] = ((s1[c]+s2[c]-193)%26)+96;
		//printf("%d\n", s3[c]);
		printf("%c", s3[c]);
		c++;
	}
	printf("\n");
	return 0;
}