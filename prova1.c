#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Entre com um n�mero qualquer: \n");
	
	n=scanf("%d",&n);
	
	printf("o dobro do n�mero entrado foi: %d\n",2*n);
	
	return 0;
}
