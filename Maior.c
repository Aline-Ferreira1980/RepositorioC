#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf ("Entre com um número inteiro positivo:\n ");
		scanf("%d",&n1);
		printf ("Entre com outro número inteiro positivo:\n ");
		scanf("%d",&n2);
	if (n1 <= 0 && n2 <= 0)
		printf ("Valores inválidos");
	else if (n1 == n2)
		printf("Valores iguais");
	else if (n1> n2)
		printf("\n\nN1 tem o valor maior que é: %d",n1);
	else 
		printf("\n\nN2 tem o valor maior que é: %d",n2);
			
	
	return 0;
		
}
