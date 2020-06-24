#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int A,B;
	
	printf ("\nEntre com um valor mumérico qualquer: ");
	scanf("%d", &A);
	
	printf ("\nEntre com outro valor numéerico qualquer: ");
	scanf("%d", &B);
	
	A++;
	B++;
	
	printf("\nSomando uma unidade em cada variável...\n");
	
	printf("A= %d\n", A);
	printf("B = %d\n",B);
	
	return 0;
}
