#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int c, s;
	
	printf("Entre com um n�mero: \n");
	scanf("%d",&c);
	
	printf("Entre com outro n�mero: \n");
	scanf("%d",&s);
	
	if (c >= 5){
		
		c = c -1;
		s = s+c;
		
	}
	else{
		s = s + c;
		
		printf("O valor da soma �: \n", s);
	}
	return 0;
}
