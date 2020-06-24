#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double decimal;
	
	printf ("Digite um número:\n");
	scanf ( "%lf" , &decimal);
	printf ("\nO número entrado foi %.2f" ,decimal);
	
	return 0;
	
}
