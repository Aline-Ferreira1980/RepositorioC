#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, areaRet;
	
	printf("Entre com um número: \n");
	scanf("%d", &num1);
	printf("Entre com outro número\n");
	scanf("%d", &num2);
	
	areaRet = num1*num2;
	
	printf("A área do retângulo é: %d",areaRet);
	
	return 0;
}
