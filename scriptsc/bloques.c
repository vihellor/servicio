#include <stdio.h>
#include <string.h>

int main() {
	char s1[100],s2[100],s3[100];
	printf("Escribe la palabra a modificar\n");
	gets(s1);
	printf("Selecciona el numero a considerar\n");
	int num;
	scanf("%d",&num);
	printf("Selecciona los numeros para el intercambio\n");
	int n[100];
	for (int i = 0; i < num; ++i)
	{
		scanf("%d",&n[i]);
	}
	//printf("%s",s1);
	int tam = strlen(s1);
	//printf("%d",tam);
 	if(strlen(s1)%num == 0){
 		//printf("Pues el if funcionó");
 		for (int i = 0; i < tam; i+=num){
 			//printf("me corro");
 			for (int j = 0; j < num; j++)
 			{
 				s2[n[j]+i-1] = s1[i+j];
 			}
 		}
 	}
	printf("%s",s2);
	printf("\n");
	return 0;
}