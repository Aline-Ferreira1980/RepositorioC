#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador= 9;
	int n= 10;
	int num=0;
	
		while (contador != 0){
			contador--;
			num = contador%2;
			if (num = 1)
			printf("%d; ",contador);
		}
		printf( "%d; ",contador+n);
	return 0;
}
