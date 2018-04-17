#include <stdio.h>
//#include <string.h>

// main() is where program execution begins.
int main() {
	int num = -6;
	double pro[30];
	char s[1000];
	int c = 0;
	int cont = 0;
	gets(s);
	for (int i = 0; i < 30; ++i){
		pro[i]=0;
	}
	
	//printf("%d",s[0]-97);
	while (s[c] != '\0') {
		if(s[c] != ' '){
			pro[(s[c]-97)]++;
			cont++;
		}
		c++;
	}
	for (int i = 0; i < 26; ++i){
		printf("%c : %f\n",i+97,(pro[i]*100/cont));
	}
	printf("conteo : %d\n",cont);
	
	return 0;
}