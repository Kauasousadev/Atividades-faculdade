#include <stdio.h>

//Programa que recebe 2 n�meros e dar� o resultado das 4 opera��es mat�maticas principais//

int main(){
	
	int a, b, soma, sub, dive, mult;
	float div;
	
	printf("Escreva o primeiro numero:");
	scanf("%d", &a);
	printf("Escreva o segundo numero:");
	scanf("%d", &b);
	
//C�lculos//

	soma = a + b;
	sub = a - b;
	div = a / b;
	dive = a % b;
	mult = a * b;
	
	printf("Soma:%d\n",soma);
	printf("Subtracao:%d\n",sub);
	printf("Divisao:%f\n",div);
	printf("Resto da divis�o:%d\n",dive);
	printf("Multiplicacao:%d\n",mult);
}
