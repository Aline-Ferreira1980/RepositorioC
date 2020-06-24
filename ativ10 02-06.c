#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i=3, j=3, k=3;
	double x=0.0, y=2.3;
	
	int result = (i && j) && k;
	printf("\n\nresult = %d", result);
	
	if (result)
	printf("\n\nA expressão é avalida com true...\n\n");
	else
	printf("\n\nA expressão é avaliada como false...\n\n");
	
	
	return 0;
}
