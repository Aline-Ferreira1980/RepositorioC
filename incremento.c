#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int A, X,Y;
		
	printf ("\nEntre com um valor mum�rico qualquer: ");
	scanf("%d", &A);
	
	int trab = A;

	X = ++A;
	
	A = trab;
	
	Y = A++;
	
	printf("\nSomando uma unidade em cada vari�vel...\n");
	
	printf("X= %d\n", X);
	printf("Y = %d\n",Y);
	
	return 0;
}
