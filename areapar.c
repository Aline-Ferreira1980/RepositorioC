#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, areaquad;
	
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	if (num%2 == 0){
		
		areaquad = num * num;
		
		printf("Área do quadrado é: %d", areaquad);
	}
	else {
		printf("Número inválido!!!\n");
		
	}
	return 0;
}
