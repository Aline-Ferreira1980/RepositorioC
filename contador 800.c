#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	int soma=0, contador=0, i;
	
	for (i=0; i<=800; i++){
		if (contador < 800)
		contador = contador +1;
		soma = soma +i; 
		
	}printf ("Resultado da soma entre os números é: %d\n", soma);
}
