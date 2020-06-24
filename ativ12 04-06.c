#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Protuguese");
	
	int i=10, j=12;
	
	int result = (i|j);
	
	printf("\n\nresult= %d", result);
	
	
	return 0;
}
