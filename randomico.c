#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i, n;
	
	printf("Este programa exibe alguns n�meros inteiros aleat�rios... \n\n");
	printf("Entre com a quatidade de n�meros a serem exibidos ");
	
	scanf ("%d",&n);
	
	for (i=0; i<n; i++){
		if (i%6 == 0)
		printf("\n");
		
	printf("%10d", rand());
	
	}
	return 0;
}
