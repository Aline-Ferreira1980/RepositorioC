#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, j=2, k=3;
	
	printf ("A express�o => ((-i)+(5*j))>=(k+1) retornou %d",((-i)+(5*j))>=(k+1) );
	
	if (((-i)+(5*j))>=(k+1))
	printf("\n\n ---- Express�o avaliada como TRUE ---- \n\n");
	else
	printf("\n\n ---- Express�o avaliada como FALSE ---- \n\n");
	
}
