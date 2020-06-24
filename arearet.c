#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, arearet;
	
	printf("Digite um número: \n");
	
	scanf("%d", &num1);
	
	printf("Digite outro número: \n");
	
	scanf("%d", &num2);
	
	if (num1%2 == 0 && num2%2 == 0){
		arearet = num1 * num2;
		printf ("A área do retângulo é: %d \n", arearet);
	}
	else {
		printf("Valores entrados inválidos!!! \n");
	}
	return 0;
}
