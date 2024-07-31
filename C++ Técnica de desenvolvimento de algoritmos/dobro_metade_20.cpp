#include <stdio.h>

// Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade 
//desse número, caso contrário, imprimir o dobro do número

int main(){
	int n, dobro;
	float metade;
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if( n > 20){
		metade = n / 2;
		printf("A metade de n e %f", metade);
	}
	else{
		dobro = n * 2;
		printf("O dobro de n e %i", dobro);
	}
}
