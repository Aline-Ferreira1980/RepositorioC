#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int somaImpar = 0, somaPar=0, i;
	
	for (i=0; i<300; i++){
		if (i%2 == 0){
			somaPar = somaPar+1;
		}
		else
		somaImpar = somaImpar +1;
	}printf("Quantidade de n�meros pares �: %d", somaPar);
	printf ("\n\nQuantidade de n�meros �mpares �: %d\n", somaImpar);
	return 0;
}
