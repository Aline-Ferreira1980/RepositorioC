#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0,  i;
	
	for (i=0; i<200; i++){
		
		if (i%2 == 0){
			soma = soma+i;
		
		printf("Soma dos pares é: %d\n", soma);
	}
}
	return 0;
	
}
	

