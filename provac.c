#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int n=4, i = 0,s = 0;
	
	printf("Entre com um numero: ");
	scanf ("%d",&n);
	for (i=0; i< 4; i++){
	 	if (n>0){
	 		n=n-1;
	 		s = s+10;
		 }if (i%2 ==1){
		 	s = s-1;
		 }else
		 s=s+1;
		 
		
	}	printf ("w: %d",s);
	return 0;
}
