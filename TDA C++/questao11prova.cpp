#include <stdio.h>

int main(){
	int idade;
	float peso;
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	if (idade >= 16 and idade <= 69){
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		if (peso >= 50)
			printf(" Dirija-se ao guiche de doacao! ");
		else
			printf(" Sua idade permite a doacao, mas seu peso nao permite! ");
	}
	else
		printf(" Sua idade nao permite a doacao de sangue! ");
}
