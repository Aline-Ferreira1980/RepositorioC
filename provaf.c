#include <stdio.h>
#include <locale.h>
#define true 1

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int crianca, numSa = 0  , salario, numCri = 0, soma, somaCri;
	int medSala , medCri;
	
	while(true){
		printf("\n Informe o numero de fillhos que você possui");
		scanf("%d", crianca);
		printf("\n Informe o valor de seu salário");
		scanf("%d", salario);
		
		if (salario == 0)
		 break;
		else
		    soma = soma + salario;
		    somaCri = somaCri + crianca;
		    numSa++;
		    numCri++;
		    
		     
		
	}
	medSala = soma/numSa;
	medCri = somaCri/numCri;
	
	printf ("\n A media de salario é de R$ %d",medSala);
	printf ("\n A media de criança por cidadão é de %d",medCri);
	
	return 0;
}
