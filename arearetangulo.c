#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, areaRet;
	
	printf("Entre com um n�mero: \n");
	scanf("%d", &num1);
	printf("Entre com outro n�mero\n");
	scanf("%d", &num2);
	
	areaRet = num1*num2;
	
	printf("A �rea do ret�ngulo �: %d",areaRet);
	
	return 0;
}
