#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor, retorno, soma=0;
	
	printf ("\nEntre co um valor qualquer: ");
	
	while(true){
			retorno = scanf("%d",&valor);
		if (retorno == true)
			soma+= valor;
		else
			break;
			printf("\nEntre com outro número qualquer	");
	}	
	printf("Soma = %d\n",soma);
}
