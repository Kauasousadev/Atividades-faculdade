#include <stdio.h>

//Ter entre 18 e 69 anos, pesar mais de 50kgs

int main(){
	int idade;
	float peso;
	
	printf("Qual a sua idade?");
	scanf("%i",&idade);
	printf("Qual o seu peso?");
	scanf("%f",&peso);
	
	if(idade >= 18 && idade <= 69){
		if(peso > 50){
			printf("Dirija-se ao guiche para fazer a triagem.");
		}else{
			printf("Voce nao pode fazer a doacao!");
		}
		}
	else{
		printf("Voce nao pode fazer a doacao!");
	}
}
