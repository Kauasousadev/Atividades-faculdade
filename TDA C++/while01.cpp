#include <stdio.h>

int main(){
	int num;
	char palavra[255]; 
	
		printf("\n Informe a palavra a ser repetida: ");
		scanf("%c",&palavra);
		
		printf("Escolha quantas vezes a palavra ira se repetir: ");
		scanf("%i", &num);
		
		int cont = 1;
		
		while(cont <= num){
			printf("%i. %c", num, palavra);
			cont++;
		}

}
