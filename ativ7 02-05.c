#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i=7, j=7;
	
	double x=0.0, y=999.9;
	
	int result;
	
	result = !!i - !j + 10;  //negaçao da negaçao da variavel i=1, negação do j=0 => 1+0+10=11  =>>>> 0 = falso e qualquer coisa diferente de 0 é verdadeiro.
	
	printf("\n\nresult= %d", result);
	
	return 0;
}
