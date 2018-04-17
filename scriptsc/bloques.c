#include <stdio.h>
#include <string.h>

int main() {
	char s1[100],s2[100],s3[100];
	printf("Escribe la palabra a modificar\n");
	gets(s1);
	printf("Selecciona los numeros de cambio\n");
	int n1,n2,n3,n4;
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	//printf("%s",s1);
	int tam = strlen(s1);
	//printf("%d",tam);
 	if(strlen(s1)%4 == 0){
 		//printf("Pues el if funcionó");
 		for (int i = 0; i < tam; i+=4){
 			//printf("me corro");
 			s2[n1+i-1] = s1[i];
 			s2[n2+i-1] = s1[i+1];
 			s2[n3+i-1] = s1[i+2];
 			s2[n4+i-1] = s1[i+3];
 		}
 	}
	printf("%s",s2);
	printf("\n");
	return 0;
}