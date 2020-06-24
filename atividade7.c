#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, dobro;
	
	printf ("Entre com um valor: \n");
	
	scanf ("%d", &numero);
	
	if (numero <= 0){
		
		printf("Valor inválido!!!");
	
	}
	else{
	
	dobro = 2*numero;
	printf("\nO dobro do número entrado é %d\n", dobro);
	return 0;
}
}
