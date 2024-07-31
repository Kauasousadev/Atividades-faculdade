#include <stdio.h>

//Escreva um programa que solicite ao usuário um número real e ao final imprima na tela se 
//o número informado é maior ou igual a dez ou menor que 10 (dez)

int main(){
	float n;
	printf("Escolha um numero:");
	scanf("%f", &n);
	
	if(n > 10){
		printf("O numero e maior que 10!");
	}
	else if(n == 10){
		printf("O numero e igual a 10.");
	}
	else{
		printf("O numero e menor que 10.");
	}
}
