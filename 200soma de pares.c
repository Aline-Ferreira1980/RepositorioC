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
Atividade válida para Nota de Aproveitamento N2  
Prof. Dr. Aparecido Freitas - Boa Sorte !
Seu endereço de e-mail (aline.nascimento1@uscsonline.com.br) será registrado quando você enviar o formulário. Não é você? Troque de conta
*Obrigatório
Considere um computador hipotético, no qual os caracteres abaixo são representados pelos seguintes bytes, expressos em conjuntos de 8 bits. Considere ainda que em um programa de computador, estão definidas as seguintes áreas com os valores iniciais apresentados abaixo: AREA1 com o valor 0000 0010 no sistema binário e AREA2 com o valor 0000 0100 no sistema binário. Em tempo de execução o computador processou uma instrução aritmética que efetua a soma dos valores de AREA1 com AREA2. O resultado dessa operação será armazenado em outra área chamada RESULT. Considerando a tabela de caracteres abaixo definida, qual caractere será apresentado na Tela (Console) após a execução da instrução ? *
5 pontos
Imagem sem legenda
D
E
V
M
F
Considere o programa abaixo escrito na Linguagem C. O programa efetua a leitura de um número qualquer e imprime o dobro do número entrado. No entanto, ao entrar com o valor 10 o programa retorna 2 ao invés de 20. Apresente as razões pelas quais o programa está efetuando o cálculo de forma errônea. *
10 pontos
Imagem sem legenda
Ele retorna 2 pois ele considera a expressão  n=scanf("%d",&n) como sendo verdadeira, retornando true(1), e na multiplicação ficaria 2*1 que retorna 2. Caso retirasse o n= retornaria o dobro do número.
Considerando a Linguagem C, assinale as alternativas CORRETAS: *
5 pontos
O tamanho de um identificador deve ser no máximo 31 caracteres.
Nomes devem iniciar com letras ou underline (_) e podem ser seguidos por letras, _ , ou dígitos.
Um programador pode declarar variáveis com qualquer nome desde que sejam cumpridas as regras da sintaxe da linguagem. Por exemplo, é permitido declarar uma variável com o nome "break" pois as regras sintáticas estão sendo atendidas.
Uma variável corresponde à uma abstração de uma célula de memória.
Um tipo de dados define uma coleção de dados e um conjunto de operações pré-definidas sobre esses dados.
Escrever um programa na Linguagem C, que leia números inteiros pelo teclado. O programa deverá encerrar quando o usuário digitar o número 777. O programa deverá imprimir a quantidade de números entrados que são superiores a 10. *
20 pontos
#include <stdio.h>
#include <locale.h>
#define true 1

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	while (true){
		printf("Entre com um número inteiro ou 777 para finalizar: \n");
 		scanf("%d", &num);
 		if (num==777){
 			cont= cont+1;
 		break;
	}
		if(num>10)
		
		cont = cont +1;
	
}   printf("Quantidade de números maior que 10 é: %d",cont);
	return 0;
}
Considerando a Linguagem C, assinale as alternativas CORRETAS: *
5 pontos
Na função printf, o caractere de controle %f é usado para se tratar dados em ponto flutuante.
Na função scanf, o caractere de controle %f é usado para se tratar dados do tipo float.
Na função scanf, o caractere de controle %lf é usado para se tratar dados do tipo double.
Na função printf, o caractere de controle %s é usado para se tratar dados do tipo string.
Na função printf, o caractere de controle %d, é usado para se tratar dados inteiros.
Assinale as alternativas CORRETAS *
5 pontos
Um programa escrito na Linguagem C pode ter uma ou mais funções.
Na Linguagem C, uma função corresponde a um agrupamento de comandos que executam uma determinada tarefa.
Na Linguagem C, a função main() tem uma grande importância no programa pois é a partir dela que se inicia a execução do programa.
Na Linguagem C, um identificador pode conter caracteres especiais, como por exemplo # ou $.
Na Linguagem C, um identificador deve começar com uma letra ou com o caractere underscore.
Escrever um programa na Linguagem C, que leia uma quantidade ilimitada de números inteiros pelo teclado. Números ímpares devem ser descartados pelo programa. O programa deverá encerrar quando o usuário entrar com três números pares. Na finalização do programa, deverá ser exibida na console a soma dos 3 números pares entrados pelo usuário. *
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
		printf("Digite um número inteiro: ");
		scanf("%d", &entrada);
		if (entrada % 2 == 0)
		{
			somaDosPares = somaDosPares + entrada;
			contagemDosPares++;
			if (contagemDosPares == 3)
				break;
		}
	}
	printf("A soma dos pares é %d", somaDosPares);

	return 0;
}

