#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int dig1, dig2, maior;
	
	printf ("Entre com um n�mero: \n");
	scanf("%d", &dig1);
	
	printf ("Entre com outro n�mero: \n");
	scanf("%d", &dig2);
	
	if (dig1 <= 0 && dig2 <= 0){
		printf("Valores entrados inv�lidos!!!");
		return 1;
		
	}
	if (dig1 > dig2){
		maior=dig1;
		printf ("O maior n�mero �: %d:", maior);
	} else{
		maior = dig2;
		printf ("O maior n�mero �: %d:", maior);
	}
	return 0;
}
