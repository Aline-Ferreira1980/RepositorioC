#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int area1, area2, valor;
	
	scanf("%d",&area1);
	scanf("%d",&area2);
	
	valor = !!area1 + !area2 + (area1|area2);
	//!!area1 = 5,equivale a true, 1
	//!area2 = 7, equivale a false,0
	//(area1 ou area2)= equivale a true;1
	//logo 1+0+(7) no bitwise or soma 000 0101 | 0000 0111 da 7 ou 1+7=8
	
	printf("valor = %d\n", valor);
	
	return 0;
}
