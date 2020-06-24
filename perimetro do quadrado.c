#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, multiplica;
	
	printf("Entre com um número para cálculo do perímetro do quadrado:\n");
	
	scanf("%d", &x);
	
	printf ("\nO número entrado é %d", x);
	
	multiplica = 4*x;
	
	printf ("\nO perímetro do quadrado é %d", multiplica);
	
	return 0;
	
}
