#include <stdio.h>

int main(){
    int A, B, C;

    printf ("Escreva o primeiro numero:");
    scanf("%d", &A);
    printf ("Escreva a operacao:\n1)soma\n2)subtracao\n3)multiplicacao\n4)divisao\n");
    scanf ("%d", &C);
    printf ("Escreva o segundo numero:");
    scanf ("%d", &B);

    switch (C)
    {
    case 1:
        printf("%d",A + B);
        break;
    case 2:
        printf("%d",A - B);
        break;
    case 3:
        printf("%d",A * B);
        break;
    case 4:
        printf("%d",A / B);
        break;
    
    }
}
