#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, areaquad;
	
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	if (num%2 == 0){
		
		areaquad = num * num;
		
		printf("�rea do quadrado �: %d", areaquad);
	}
	else {
		printf("N�mero inv�lido!!!\n");
		
	}
	return 0;
}
