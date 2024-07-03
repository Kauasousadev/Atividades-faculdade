#include <stdio.h>

//Programa que recebe 2 números e dará o resultado das 4 operações matématicas principais//

int main(){
	
	int a, b, soma, sub, dive, mult;
	float div;
	
	printf("Escreva o primeiro numero:");
	scanf("%d", &a);
	printf("Escreva o segundo numero:");
	scanf("%d", &b);
	
//Cálculos//

	soma = a + b;
	sub = a - b;
	div = a / b;
	dive = a % b;
	mult = a * b;
	
	printf("Soma:%d\n",soma);
	printf("Subtracao:%d\n",sub);
	printf("Divisao:%f\n",div);
	printf("Resto da divisão:%d\n",dive);
	printf("Multiplicacao:%d\n",mult);
}
