#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, soma;
	
	printf ("Entre com um valor: \n");
	scanf ("%d", &num1);
	
	printf ("Entre com outro valor: \n");
	scanf ("%d", &num2);
	
	if (num1 <= 0 && num2 <= 0) {
		printf("Valores entrados inv�lidos!!!");
		return 1;
	}
	soma = num1 +num2;
	printf("\nA soma dos valores entrados � %d", soma);
	return 0;
}
