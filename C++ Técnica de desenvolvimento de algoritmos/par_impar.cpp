#include <stdio.h>

//. Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como 
//par ou ímpar

int main(){
	int n;
	printf("Escolhe um numero: ");
	scanf("%i", &n);
		
	if(n % 2== 0){
		printf("O numero e par");
	}else{
		printf("O numero e impar");
	}
}
