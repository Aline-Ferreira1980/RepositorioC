#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=0;
	int num=500;
	
	int i;
	for(i=0; i<= num; i++){
		if (i%2==0){
			printf("N�mero Par: %d\n\n",i);
		}else{
			printf("N�mero �mpar: %d\n",i);
		}
	}return 0;
	
}
