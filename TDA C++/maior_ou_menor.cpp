#include <stdio.h>

int main(){
	float num1, num2;
	printf("Insira um numero:");
	scanf("%f", &num1);
	printf("Insira outro numero:");
	scanf("%f", &num2);
	
	if (num1 > num2){
		printf("O numero %.2f eh maior que o numero %.2f", num1,num2);
	}else if(num1 < num2){
		printf("O numero %.2f eh menor que o numero %.2f", num1,num2);
	}else{
		printf("Os numeros sao iguais.");
	}
}
