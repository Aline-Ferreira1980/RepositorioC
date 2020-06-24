#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A,B,C,D;
	
	A=1;
	B=20;
	C=3;
	D=9;
	
	A+=2;
	B-=5;
	C*=3;
	D/=5;
	
	printf("A= %d\n", A);
	printf("B= %d\n", B);
	printf("C= %d\n", C);
	printf("D= %d\n", D);
	
	return 0;
	
}
