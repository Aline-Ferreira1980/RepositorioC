#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=0;
	int num=500;
	
	int i;
	for(i=0; i<= num; i++){
		if (i%2==0){
			printf("Número Par: %d\n\n",i);
		}else{
			printf("Número ímpar: %d\n",i);
		}
	}return 0;
	
}
