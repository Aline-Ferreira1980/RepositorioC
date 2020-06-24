#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int A, X,Y;
		
	printf ("\nEntre com um valor mumérico qualquer: ");
	scanf("%d", &A);
	
	int trab = A;

	X = ++A;
	
	A = trab;
	
	Y = A++;
	
	printf("\nSomando uma unidade em cada variável...\n");
	
	printf("X= %d\n", X);
	printf("Y = %d\n",Y);
	
	return 0;
}
