#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont=0;
	int soma=0; 
	int i;
	for (i=0; i<=10; i++){
		if (i==10)
		printf("Soma= %d\n\n", soma);
	else{
		cont = cont+1;
		if (i%2 ==0)
		soma= soma+i;
	}
}
	return 0;
}
Atividade 2 - Algoritmos - ED I
Atividade v�lida para Nota de Aproveitamento N2  
Prof. Dr. Aparecido Freitas - Boa Sorte !
Seu endere�o de e-mail (aline.nascimento1@uscsonline.com.br) ser� registrado quando voc� enviar o formul�rio. N�o � voc�? Troque de conta
*Obrigat�rio
Considere um computador hipot�tico, no qual os caracteres abaixo s�o representados pelos seguintes bytes, expressos em conjuntos de 8 bits. Considere ainda que em um programa de computador, est�o definidas as seguintes �reas com os valores iniciais apresentados abaixo: AREA1 com o valor 0000 0010 no sistema bin�rio e AREA2 com o valor 0000 0100 no sistema bin�rio. Em tempo de execu��o o computador processou uma instru��o aritm�tica que efetua a soma dos valores de AREA1 com AREA2. O resultado dessa opera��o ser� armazenado em outra �rea chamada RESULT. Considerando a tabela de caracteres abaixo definida, qual caractere ser� apresentado na Tela (Console) ap�s a execu��o da instru��o ? *
5 pontos
Imagem sem legenda
D
E
V
M
F
Considere o programa abaixo escrito na Linguagem C. O programa efetua a leitura de um n�mero qualquer e imprime o dobro do n�mero entrado. No entanto, ao entrar com o valor 10 o programa retorna 2 ao inv�s de 20. Apresente as raz�es pelas quais o programa est� efetuando o c�lculo de forma err�nea. *
10 pontos
Imagem sem legenda
Ele retorna 2 pois ele considera a express�o  n=scanf("%d",&n) como sendo verdadeira, retornando true(1), e na multiplica��o ficaria 2*1 que retorna 2. Caso retirasse o n= retornaria o dobro do n�mero.
Considerando a Linguagem C, assinale as alternativas CORRETAS: *
5 pontos
O tamanho de um identificador deve ser no m�ximo 31 caracteres.
Nomes devem iniciar com letras ou underline (_) e podem ser seguidos por letras, _ , ou d�gitos.
Um programador pode declarar vari�veis com qualquer nome desde que sejam cumpridas as regras da sintaxe da linguagem. Por exemplo, � permitido declarar uma vari�vel com o nome "break" pois as regras sint�ticas est�o sendo atendidas.
Uma vari�vel corresponde � uma abstra��o de uma c�lula de mem�ria.
Um tipo de dados define uma cole��o de dados e um conjunto de opera��es pr�-definidas sobre esses dados.
Escrever um programa na Linguagem C, que leia n�meros inteiros pelo teclado. O programa dever� encerrar quando o usu�rio digitar o n�mero 777. O programa dever� imprimir a quantidade de n�meros entrados que s�o superiores a 10. *
20 pontos
#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	while (true){
		printf("Entre com um n�mero inteiro ou 777 para finalizar: \n");
 		scanf("%d", &num);
 		if (num==777){
 			cont= cont+1;
 		break;
	}
		if(num>10)
		
		cont = cont +1;
	
}   printf("Quantidade de n�meros maior que 10 �: %d",cont);
	return 0;
}
Considerando a Linguagem C, assinale as alternativas CORRETAS: *
5 pontos
Na fun��o printf, o caractere de controle %f � usado para se tratar dados em ponto flutuante.
Na fun��o scanf, o caractere de controle %f � usado para se tratar dados do tipo float.
Na fun��o scanf, o caractere de controle %lf � usado para se tratar dados do tipo double.
Na fun��o printf, o caractere de controle %s � usado para se tratar dados do tipo string.
Na fun��o printf, o caractere de controle %d, � usado para se tratar dados inteiros.
Assinale as alternativas CORRETAS *
5 pontos
Um programa escrito na Linguagem C pode ter uma ou mais fun��es.
Na Linguagem C, uma fun��o corresponde a um agrupamento de comandos que executam uma determinada tarefa.
Na Linguagem C, a fun��o main() tem uma grande import�ncia no programa pois � a partir dela que se inicia a execu��o do programa.
Na Linguagem C, um identificador pode conter caracteres especiais, como por exemplo # ou $.
Na Linguagem C, um identificador deve come�ar com uma letra ou com o caractere underscore.
Escrever um programa na Linguagem C, que leia uma quantidade ilimitada de n�meros inteiros pelo teclado. N�meros �mpares devem ser descartados pelo programa. O programa dever� encerrar quando o usu�rio entrar com tr�s n�meros pares. Na finaliza��o do programa, dever� ser exibida na console a soma dos 3 n�meros pares entrados pelo usu�rio. *
20 pontos
#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int contagemDosPares = 0;
	int somaDosPares = 0;
	while (true)
	{
		int entrada;
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &entrada);
		if (entrada % 2 == 0)
		{
			somaDosPares = somaDosPares + entrada;
			contagemDosPares++;
			if (contagemDosPares == 3)
				break;
		}
	}
	printf("A soma dos pares � %d", somaDosPares);

	return 0;
}

