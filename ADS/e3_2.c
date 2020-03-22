#include <stdio.h>
 
int main(void) {
	// your code goes here
 
	char nome[500]; //declara nome como string (literal) de 5 caracteres
	int idade;	  //declara a variável idade do tipo inteiro
 
	printf("Digite sua idade: \n");	//comando de saída; escreve na tela
	scanf("%d", &idade);			//lê o teclado e atribui a idade
 
	printf("Digite seu nome: \n");	//lê o nome
	scanf("%s", &nome);			//lê o teclado e atribui a idade
 
	printf("%s, sua idade é: %d\n", nome, idade);	//escreve a idade na tela
 
	return 0;
}
