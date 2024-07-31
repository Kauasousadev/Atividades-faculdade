#include <stdio.h>

int main(){
	char nomealuno[100];
	int media, mediaaprov, nota1, nota2, nota3;
	char sexo;
	
	printf("Qual a media de aprovacao da escola?");
	scanf("%i", &mediaaprov);
	
	printf("Qual o nome do(a) aluno(a)?");
	scanf("%s", &nomealuno);
	
	printf("Qual o genero do aluno(a)? M ou F    ");
	scanf("%s", &sexo);
	
	printf("Qual a primeira nota do aluno(a)?");
	scanf("%i", &nota1);
	
	printf("Qual a segunda nota do aluno(a)?");
	scanf("%i", &nota2);
	
	printf("Qual a terceira nota do aluno(a)?");
	scanf("%i", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if(sexo == 'M' | sexo == 'm'){
			if(media > mediaaprov){
		printf("O aluno %s foi aprovado com media %i", nomealuno, media);
	}else{
		printf("O aluno %s foi reprovado com media %i", nomealuno, media);
	}
	}
	else{
	if(media > mediaaprov){
		printf("A aluna %s foi aprovada com media %i", nomealuno, media);
	}else{
		printf("A aluna %s foi reprovada com media %i", nomealuno, media);
	}
}
}
