#include <stdio.h>
#include <locale.h>

int main ( ){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2, result;
	
	printf ("Entre com o primeiro n�mero: \n");
	scanf("%d", &n1);
	
	printf("Entre com o segundo n�mero: \n");
	scanf  ("%d", &n2);
	
	if ((n1%2 ==1)&&(n2%2 ==1))
{
	printf("A USCS tem um excelente curso de Computa��o!!!");
	return 1;
	
}
if ((n1%2 ==0)&&(n2%2 ==1))
{
	printf("O curso de Computa��o da USCS � �timo!!!");
	return 1;
	
}if ((n1%2 ==1)&&(n2%2 ==0))
{
	printf("O curso de Computa��o da USCS abrir� muitas portas!!!");
	return 1;
	
}if ((n1%2 ==0)&&(n2%2 ==0))
{
	printf("A USCS tem um excelente curso de Computa��o!!!");
	return 1;
	
} 
return 0;
}
