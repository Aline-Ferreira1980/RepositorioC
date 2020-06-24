#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i=20, j=30;
	int result = (i & j);
	//
	printf("\n\nresult= %d ", result);
	
	return 0;
}
