#include <stdio.h>

//labore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
//de 3, ou, não é múltiplo de 3

int main(){
	int n, m;
	printf("Escolhe um numero: ");
	scanf("%i", &n);
	
	printf("Escolha o multiplo a ser testado: ");
	scanf("%i", &m);	
	if(n % m == 0){
		printf("O numero e multiplo de %i !", m);
	}else{
		printf("O numero nao e multiplo de %i !", m);
	}
}
