#include <stdio.h>
//Programa que receberá o nome do(a) funcionário(a), salário fixo, porcentagem de comissão por venda e total de vendas do funcionário, calculará o salário a ser recebido pelo funcionário com a comissão incluso.//

//Declaracoes e inputs das varriaveis//
int main(){
    float salariofixo, totaldevendas, porcentagemcomissao, salariofinal, comissao;
    char nome[50] = "";
    printf ("Digite o nome do(a) vendedor(a):");
    scanf ("%s", nome);
    printf ("Digite o salario fixo do vendedor(a):");
    scanf("%f", &salariofixo);
    printf ("Digite quantas vendas o vendedor(a) fez:");
    scanf ("%f", &totaldevendas);
    printf ("Digite o valor da comissao do vendedor(a):");
    scanf ("%f", &porcentagemcomissao);

    //Calculo do salario//
    comissao = (porcentagemcomissao/100)*totaldevendas;
    salariofinal = {(porcentagemcomissao/100)*totaldevendas + salariofixo};

    //Exibir o resultado//
    printf ("O valor do salario fixo: %.2f \n", salariofixo);
    printf ("O valor da comissao foi de: %.2f \n", comissao);
    printf ("O salario com a comissao: %.2f \n", salariofinal);
}
