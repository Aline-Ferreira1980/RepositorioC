
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int cont, soma;
	
	printf("Entre com um número: \n");
	scanf("%d",&cont);
	
	printf("Entre com outro número: \n");
	scanf("%d",&soma);
	
	if (cont >= 1){
		
		cont = cont -1;
		soma = soma+2;
		printf("S: \n",soma);
		}
		else if(cont=1){
			soma= soma+cont;
			printf("s: %d \n",soma) ;
		}
			else{
				soma=soma-cont;
				printf("s: %d \n",soma);
					
		}
		
	
	return 0;
}
