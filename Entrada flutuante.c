#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Porutguese");
	
	float preco;
	printf ("Entre com um valor decimal: \n");
	
	scanf ("%f", &preco);
	
	printf ("O número digitado foi %.3f\n", preco);
	return 0;
	
}
