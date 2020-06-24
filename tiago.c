
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int v1,v2;
	
	
	printf("Entre com um numero: \n");
	scanf("%d", &v1);
	
	printf("Entre com outro numero: \n");
	scanf("%d", &v2);

	if ((v1 <= 0) && (v2 <= 0)){
		
	
	printf("Valor invalido  \n");
    return 1;}
    
    if (v1 == v2){
    	
    	printf("Valor digitados são iguais");
	

   } else {
    	if(v1 > v2 ){
    
    printf("O maior numero é %d",v1);}
    

    else{
    printf("O maior numero é %d",v2);}
	
	return 0;
	}	
	
}


