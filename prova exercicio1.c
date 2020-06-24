#include <stdio.h>
#include <locale.h>

int main ( ){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2, result;
	
	printf ("Entre com o primeiro número: \n");
	scanf("%d", &n1);
	
	printf("Entre com o segundo número: \n");
	scanf  ("%d", &n2);
	
	if ((n1%2 ==1)&&(n2%2 ==1))
{
	printf("A USCS tem um excelente curso de Computação!!!");
	return 1;
	
}
if ((n1%2 ==0)&&(n2%2 ==1))
{
	printf("O curso de Computação da USCS é ótimo!!!");
	return 1;
	
}if ((n1%2 ==1)&&(n2%2 ==0))
{
	printf("O curso de Computação da USCS abrirá muitas portas!!!");
	return 1;
	
}if ((n1%2 ==0)&&(n2%2 ==0))
{
	printf("A USCS tem um excelente curso de Computação!!!");
	return 1;
	
} 
return 0;
}
