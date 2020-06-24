#include <stdio.h>

#define PI 3.141592  // diretiva de pré processamento. Define uma variável para toda vez que ele aparecer no programa.

int main (void){
	double R = 10.0;
	double A = R*PI*R;
	
	printf ("A = %f\n", A);
	return 0;
}
