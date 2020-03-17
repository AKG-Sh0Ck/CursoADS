#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
		setlocale (LC_ALL, "Portuguese");
	
	int dia1, mes1, ano1, data1;
	int dia2, mes2, ano2, data2;
	
	printf ("Dia: ");
	scanf ("%d", &dia1);
	 
	 
	 if (dia1 > 31){
	 	printf("Dia inválido!");
	 	return 0;
	 }
	 else if (dia1 < 1){
	 	printf("Dia inválido!");
	 	return 0;
	 }
	
	printf ("Mês: ");
	scanf ("%d", &mes1);
	
	if (mes1 > 12){
		printf("Mês inválido!");
	 	return 0;
	}
	else if (mes1 < 1){
		printf("Mês inválido!");
	 	return 0;
	}
	
	printf ("Ano: ");
	scanf ("%d", &ano1);
	 system("cls"); 	//Limpa a tela no windows; no linux é system(“clear”); 
//system() executa comandos do SO; Ex.: calc.exe
//O que conseguir executar num “cmd” pode tentar rodar a partir de um system();
//Estamos criando programas de “console” e possuem as limitações do console do Sistema Operacional (SO)
	 
	if (ano1 < 1000){
	printf("Ano inválido!");
	return 0;
	}
	else if (ano1 > 9999){
	printf("Ano inválido!");
	return 0;
	}
	
	
	printf ("Dia: ");
	scanf ("%d", &dia2);
	 
	 
	 if (dia2 > 31){
	 	printf("Dia inválido!");
	 	return 0;
	 }
	 else if (dia2 < 1){
	 	printf("Dia inválido!");
	 	return 0;
	 }
	 
	printf ("Mês: ");
	scanf ("%d", &mes2);
	
	if (mes2 > 12){
		printf("Mês inválido!");
	 	return 0;
	}
	else if (mes2 < 1){
		printf("Mês inválido!");
	 	return 0;
	}
	
	printf ("Ano: ");
	scanf ("%d", &ano2);
	system("cls");
	 
	if (ano2 < 1000){
		printf("Ano inválido!");
		return 0;
	}
	else if (ano2 > 9999){
		printf("Ano inválido!");
		return 0;
	}
	
	printf("-------------------------------------------------\n");
	printf("Primeira data informada: %d/%d/%d             -\n", dia1,mes1,ano1);
	printf("-------------------------------------------------\n");
	printf("Segunda data informada: %d/%d/%d              -\n", dia2,mes2,ano2);
	printf("-------------------------------------------------\n\n\n");
	
		data1 = (dia1 + mes1 + ano1);
		data2 = (dia2 + mes2 + ano2);
		
		if (data1 > data2){
			printf("*************************************************\n");
			printf("A primeira data é maior!                        *\n");
			printf("*************************************************\n");
		}
		else if (data1 == data2){
			printf("*************************************************\n");
			printf("As datas estão iguais!                          *\n");
			printf("*************************************************\n");
		}
		else{
			printf("*************************************************\n");
			printf("A segunda data é maior!                         *\n");
			printf("*************************************************\n");
		}
}
