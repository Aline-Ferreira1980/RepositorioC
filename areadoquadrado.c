#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	int areaQuad;
	
	printf("Digite um número inteiro: \n");
	
	scanf ("%d",&num);
	
	areaQuad = num*num;
	
	printf("O resultado da área do quadrado é: %d", areaQuad);
	
	return 0;
	
	
	
}
