#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int contagemDosPares = 0;
	int somaDosPares = 0;
	while (true)
	{
		int entrada;
		printf("Digite um número inteiro: ");
		scanf("%d", &entrada);
		if (entrada % 2 == 0)
		{
			somaDosPares = somaDosPares + entrada;
			contagemDosPares++;
			if (contagemDosPares == 3)
				break;
		}
	}
	printf("A soma dos pares é %d", somaDosPares);

	return 0;
}
