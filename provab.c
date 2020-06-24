#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	double salario, mediaSalario=0, maiorSalario, somaSalario;
	int filho, mediaFilho, i, quantidadeHabitante=0;
	
	while (true){
		if (salario<0)
		break;
		printf("Digite seu salário: \n");
		scanf("%lf",&salario);
		somaSalario = somaSalario + salario;
		
		printf("Digite quantidade de filhos: \n");
		scanf("%d",&filho);
		quantidadeHabitante = quantidadeHabitante +filho+1;
	
	}
	for (i=0; i<=quantidadeHabitante; i++){
		if (salario < 0){
				break;
			}else 
				mediaSalario = mediaSalario/quantidadeHabitante;
		if (salario < maiorSalario)
				maiorSalario = salario;
	}
	

	
	
	return 0;
}
