#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese"); //acentuação idioma
	
	int entrada;
	printf ("Entre com um número: \n");
	scanf ("%d" , &entrada);      // endereço de onde será alocado o número.
	printf ("O número digitado foi: %d\n ", entrada);
	return 0;
}
