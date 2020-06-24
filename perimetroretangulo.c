#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, perimetroRet;
	
	printf("Entre com um número: \n");
	scanf("%d", &num1);
	printf("Entre com outro número\n");
	scanf("%d", &num2);
	
	perimetroRet = 2*num1+2*num2;
	
	printf("O perímetro do retângulo é: %d",perimetroRet);
	
	return 0;
	
}
