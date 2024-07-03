/*
Escreva um algoritmo para ler 2 notas e:
1) Calcular a m�dia entre elas.
2) Imprimir aprovado se m�dia for maior ou igual a sete.
3) Caso contr�rio, solicitar para fazer o exame final.
4) Se a m�dia entre M�dia anterior e exame final for maior ou igual a 5
5) Imprimir "aprovado" sen�o, imprimir "reprovado"
*/

// Na linha abaixo estamos carregando a biblioteca Standart Input Output
#include <stdio.h>
//Na linha abaixo estamos abrindo o programa principal
int main() {
	float Nota1, Nota2, Media, exame, nota_final;
	printf("Informe a primeira nota:");
	scanf("%f", &Nota1);
	printf("Informe a segunda nota:");
	scanf("%f", &Nota2);
	//Processamento
	Media = (Nota1 + Nota2) / 2;
	if (Media >= 7){
		printf("Aluno aprovado!");
	} 
	else{
		printf("Aluno reprovado! Faca o exame final.");
		printf("Qual foi a sua nota no exame final?");
		scanf("%f", &exame);
		nota_final = (Media + exame)/2;
		if (nota_final >=5 ){
			printf("Parabens, aluno aprovado!");
		}
		else {
			printf("Aluno reprovado!");
		}
	}
}
//Na linha acima estamos fechando o programa principal
