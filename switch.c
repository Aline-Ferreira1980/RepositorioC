#include <stdio.h>

int main (){
	
	int n; 
	
	printf ("Entre com um inteiro qualquer: ");
	
	scanf("%d",&n);
	
	switch(n){
		case 1:
			++n;
			printf("USCS\n");
			printf("%d",n);
			break;
			
		case 2:
			n=n+10;
			printf("%d", n);
			break;
		
		default:
			printf("\nSai pelo default....");
	}
	return 0;
}
