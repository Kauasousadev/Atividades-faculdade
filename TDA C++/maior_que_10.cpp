#include <stdio.h>

//Elabore um programa que solicite ao usu�rio um n�mero real e ao final imprima na tela se o 
//n�mero informado � maior que 10 (dez)

int main(){
	int n;
	 printf("Escolha um numero:");
	 scanf("%i",&n);
	 
	 if(n > 10){
	 	printf("O numero escolhido e maior que 10!");
	 }else {
	 	printf("O numero escolhido nao e maior que 10.");
	 }
}
