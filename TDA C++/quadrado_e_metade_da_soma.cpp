#include <stdio.h>

//Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado 
//seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele

int main(){
	int n1, n2, soma, quadrado, metade;
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	
	if(soma > 10){
		quadrado = soma * soma;
		printf("O quadrado da soma de %i mais %i eh: %i", n1, n2, quadrado);
	}else{
		metade = soma / 2;
		printf("A metade da soma de %i mais %i eh: %i", n1, n2, metade);
	}
}
