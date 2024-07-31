#include <stdio.h>

//Calculadora de media escolar com sistema de recuperacao por exame final//

int main(){
	
	float nota1, nota2, media, notaexamef, mediafinal;
	
	printf("Digite a nota da primeira prova:");
	scanf("%f", &nota1);
	printf("Digite a nota da segunda prova:");
	scanf("%f", nota2);
	
	media = (nota1 + nota2)/2;
	printf("Sua média:%f", media);
	if (media > 7){
		printf("Aprovado!");
	}
	else{
		printf("Reprovado, faça o exame final!");
		printf("Digite a nota do exame final:");
		scanf("%f", notaexamef);
		
		if ((media + notaexamef)/2 > 5){
			printf("Aprovado!");
		}
		else {
			printf("Reprovado!");
		}
	}
	}
