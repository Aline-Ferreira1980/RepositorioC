#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i=200; i>=0; i--){
			if (i%2 == 0)
		printf("%d\n",i);
	}

	return 0;
}
