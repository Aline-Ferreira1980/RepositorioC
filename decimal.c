#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double decimal;
	
	printf ("Digite um n�mero:\n");
	scanf ( "%lf" , &decimal);
	printf ("\nO n�mero entrado foi %.2f" ,decimal);
	
	return 0;
	
}
