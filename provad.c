#include <stdio.h>
#include <locale.h>
#define true 1

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int filho, numsalario = 0  , salario, numfilho = 0, somasalario, somafilho;
	int medSalario , medfilho , maiorSalario = 0;
	
	while(true){
		printf("\n Informe o numero de filhos: \n");
		scanf("%d", &filho);
		printf("\n Informe o valor do salário:\n ");
		scanf("%d", &salario);
		
		if (salario == 0)
		 break;
		else
		    somasalario = somasalario + salario;
		    somafilho = somafilho + filho;
		    numsalario++;
		    numfilho++;
		    if(salario > maiorSalario){
		    	maiorSalario = salario;
			}
			   
	}
	medSalario = somasalario/numsalario;
	medfilho = somafilho/numfilho;
	
	printf ("\n A media de salario é de R$ %d: ",medSalario);
	printf ("\n A media de filho por habitante é de %d: ",medfilho);
	printf ("\n O maior salário é de R$ %d: ",maiorSalario);
	
	return 0;
}
