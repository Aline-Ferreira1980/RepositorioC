#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	while (true){
		printf("Entre com um n�mero inteiro ou 777 para finalizar: \n");
 		scanf("%d", &num);
 		if (num==777){
 		break;
	}
		if(num>10)
		
		cont = cont +1;
	
}   printf("Quantidade de n�meros maior que 10 �: %d",cont);
	return 0;
}
