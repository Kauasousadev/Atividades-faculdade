#include <stdio.h>

//. Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como 
//par ou �mpar

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
