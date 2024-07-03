#include <stdio.h>

int main(){
	float raio, volume;
	
	printf("Escreva o raio da esfera:");
	scanf("%f",&raio);
	
	volume = 4/3 * 3.14 * (raio * raio * raio);
	
	printf("Volume da esfera:%.2f",volume);
}
