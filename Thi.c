#include <stdio.h>
#include <locale.h>
#define true 1

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int crianca, numSa = 0  , salario, numCri = 0, soma, somaCri;
	int  maiorSal = 0;
	float medSala , medCri;
	
	while(true){
		printf("\n Informe o numero de fillhos que você possui");
		scanf("\n %d", &crianca);
		printf("\n Informe o valor de seu salário");
		scanf("%d", &salario);
		
		if (salario == 0)
		 break;
		else
		    soma = soma + salario;
		    somaCri = somaCri + crianca;
		    numSa++;
		    numCri++;
		    if(salario > maiorSal){
		    	maiorSal = salario;
			}
			
		    
		    
		     
		
	}
	medSala = soma/numSa;
	medCri = somaCri/numCri;
	
	printf ("\n A media de salario é de R$ %f",medSala);
	printf ("\n A media de criança por cidadão é de %f",medCri);
	printf ("\n O maior salário é de R$ %d",maiorSal);
	
	return 0;
}
