/*	6. Fa�a um programa para um caixa eletr�nico. O programa dever� perguntar ao usu�rio o valor do
saque e depois informar quantas notas de cada valor ser�o fornecidas. As notas dispon�veis ser�o as de 1,
5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais. O programa n�o deve se
preocupar com a quantidade de notas existentes na m�quina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de
50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s notas de 100, uma nota de
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"");
	printf("Saque m�nimo R$10  e m�ximo R$600,00.\n");
	int n100,n50,n10,n5,n1;
	int saque;
	printf("Qual o valor do saque ?R$:");
	scanf("%d",&saque);
	printf("\n%d notas de 100",saque /100);
	saque = saque%100;
	printf("\n%d notas de 50",saque /50);
	saque = saque%50;
	printf("\n%d notas de 10",saque /10);
	saque = saque%10;
	printf("\n%d notas de 5",saque /5);
	saque = saque%5;
	printf("\n%d notas de 1",saque /1);
	saque = saque%1;
	
	
		
	}


