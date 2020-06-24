#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0;
	int cont =0;
	int i;
	for ( i=0; i<=800; i++){
		if(i==800){
		printf("Total da soma dos números é: %d\n\n", soma);
	}else{
	 cont = cont+1;
	 soma = soma+i;
}
}
}
