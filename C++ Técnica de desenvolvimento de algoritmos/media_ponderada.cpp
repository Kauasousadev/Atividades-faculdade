#include <stdio.h>

// O sistema de avaliação de determinada disciplina é composto por três provas. A primeira 
//prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a 
//média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno 
//desta disciplina e dizer se o aluno foi aprovado ou não

int main(){
	float notap1, notap2, notap3, mediafinal;
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &notap1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &notap2);
	printf("Digite a nota da terceira prova: ");
	scanf("%f", &notap3);
	
	mediafinal = (notap1 * 2 + notap2 * 3 + notap3 * 5)/10;
	
	if(mediafinal > 6){
		printf("Aluno aprovado!");
	}else{
		printf("Aluno reprovado!");
	}
}
