#include <stdio.h>

//Ter entre 18 e 69 anos, pesar mais de 50kgs

int main(){
	int idade;
	float peso;
	
	printf("Qual a sua idade?");
	scanf("%i",&idade);
	
	if (idade < 18 or idade >= 70){
		printf("Obrigado, mas sua idade nao permite a doacao de sangue.");
	}else{
	printf("Qual o seu peso?");
	scanf("%f",&peso);
		if(peso > 50){
			printf("Dirija-se ao guiche para fazer a triagem.");
		}else{
			printf("Obrigado, mas seu peso não permite a doacao.");
		}
	}
}
