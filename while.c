#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, soma=0;
	
	while (i<= 10) {
		soma += i;
		
		i +=1;
		
	}
	printf("Soma = %d\n", soma);
	return 0;
}
