#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portugese");
	
	int i=1, j=2, k=3;
	
	printf(" A expressão =>(i<(j-k)) retornou: %d\n", (i<(j-k)));
	if (i<(j-k))
	printf("\n\n ----Expressão avaliada com TRUE ----\n\n");
	
	else
	printf("\n\n ---- Expressão avaliada com FALSE ----\n\n");
	
	return 0;
}
