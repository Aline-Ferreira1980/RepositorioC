#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Entre com um número qualquer: \n");
	
	n=scanf("%d",&n);
	
	printf("o dobro do número entrado foi: %d\n",2*n);
	
	return 0;
}
