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
		s3[c] = s1[c]-s2[c] +97;
		//printf("%d\n", s3[c]);
		if(s3[c] > 122)
				printf("%c", s3[c]-26);
			else if(s3[c] < 97)
				printf("%c", s3[c]+26);
			else 
				printf("%c", s3[c]);
		c++;
	}
	printf("\n");
	return 0;
}