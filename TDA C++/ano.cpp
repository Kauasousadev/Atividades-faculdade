#include <stdio.h>

int main(){
	int dias, anos;
	float maisde1ano;
	printf("Digite a quantidade de dias:");
	scanf("%i",&dias);
	
	if(dias < 365){
		printf("Essa quantidade de dias e menos de um ano.");
	} else if (dias == 365){
		printf("E um ano.");
	} else{
		maisde1ano = dias/365;
		printf("Esse valor e de:%.1f",maisde1ano);
	}
}
