#include <stdio.h>

int main(){
	int media, mediaaprov, nota1, nota2, nota3;
	char nomealuno, sexo, sexom, sexof;
	
	printf("Qual a media de aprovacao da escola?");
	scanf("%i", &mediaaprov);
	
	printf("Qual o nome do(a) aluno(a)?");
	scanf("%c", &nomealuno);
	
	printf("Qual o genero do aluno(a)? M ou F");
	printf("%c", &sexo);
	
	printf("Qual a primeira nota do aluno(a)?");
	scanf("%i", &nota1);
	
	printf("Qual a segunda nota do aluno(a)?");
	scanf("%i", &nota2);
	
	printf("Qual a terceira nota do aluno(a)?");
	scanf("%i", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if(sexo == "M"){
			if(media > mediaaprov){
		printf("O aluno %c foi aprovado com media %i", nomealuno, media);
	}else{
		printf("O aluno %c foi reprovado com media %i", nomealuno, media);
	}
	}
	else{
	if(media > mediaaprov){
		printf("a aluna %c foi aprovado com media %i", nomealuno, media);
	}else{
		printf("a aluna %c foi reprovada com media %i", nomealuno, media);
	}
}
}
