#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i=1;
	int result;
	
	result = ~i;
	printf("result = %d",result);
	
	return 0;
}
