#include <stdio.h>
#include <locale.h>
#define true 1
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num=0;
	int soma=0;
	
		while(true){
			printf("Digite um número inteiro: \n");
			scanf("%d",&num);
			
			if (num == 999)
				break;
			else
				soma = soma+num;
	}
	printf("Soma = %d", soma);
	return 0;	
}
