#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL , "Portuguese");
	
	int i=1, j=2, k=3;
	
	printf("A expressão => ((-1)+ (5*j)) >= (k+1) retornou %d)", ((-i)+ (5*j))>=(k+1));
	
	if (((-i)+(5*j))>= (k+1))
	
	printf ("\n\n ------  Expressão avalida como verdadeira ----------");
	
	else  
	printf("\n\n--------  Expressão avaliada como falsa ----------");
	
	return 0;
	}
