#include <stdio.h>

int main () {
	printf("\n\n ==========Inicio do Programa ====\n\n");
	
	int i, contador=0;
	float soma=0, media;
	float v[5]; // array com 5 elementos float
	
	for (i=0; i<5; i++){ // está salvando/preenchendo os dados entrados no array
		printf("\nEntre com o valor: ");
		scanf("%f", &v[i]);
		soma = soma+v[i]; //calculo da media aritmetica
	}
	media =soma/i;
	for (i=0; i<5; i++){
		if (v[i]>media)
		contador++;  //comparado cada elemento do array e quantos são mairoes que a media
		
	}
	printf("\n\nMedia: %f \n\nValores acima da media: %d\n", media, contador);
	printf("\n\n ======fim do Programa =====\n\n");
	
	return 0;
}
