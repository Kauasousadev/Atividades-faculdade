#include <stdio.h>

//Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o 
//número informado é positivo, negativo ou nulo (zero)

int main(){
		float n;
	printf("Escolha um numero:");
	scanf("%f", &n);
	
	if(n > 0){
		printf("O numero e positivo");
	}
	else if(n == 0){
		printf("O numero e nulo.");
	}
	else{
		printf("O numero e negativo.");
	}
}
