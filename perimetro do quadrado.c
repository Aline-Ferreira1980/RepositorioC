#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, multiplica;
	
	printf("Entre com um n�mero para c�lculo do per�metro do quadrado:\n");
	
	scanf("%d", &x);
	
	printf ("\nO n�mero entrado � %d", x);
	
	multiplica = 4*x;
	
	printf ("\nO per�metro do quadrado � %d", multiplica);
	
	return 0;
	
}
