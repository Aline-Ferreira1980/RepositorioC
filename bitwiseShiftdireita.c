#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Porutuguese");
	
	int i= 20;
	int result;
	
	result = i >> 1;
	
	printf("\n\nresult= %d ", result);
	
	return 0;
	
}
