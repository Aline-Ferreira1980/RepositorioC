#include <stdio.h>
#include <locale.h>
#define true 1

int main(){
	
	setlocle(LC_ALL,"Portuguese");
	
	int crianca, numSa = 0  , salario, numCri = 0, soma, somaCri;
	int medSala , medCri;
	
	while(true){
		printf("\n Informe o numero de fillhos que voc� possui");
		scanf("%d", crianca);
		printf("\n Informe o valor de seu sal�rio");
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
	
	printf ("\n A media de salario � de R$ %d",medSala);
	printf ("\n A media de crian�a por cidad�o � de %d",medCri);
	
	return 0;
}
