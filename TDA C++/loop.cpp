#include <stdio.h>
int main(){
    int x = 1;
    int loop = 0;
    int loopsfor = 0;

    while (x <= 100){
        printf("\nO numero agora eh %i", x);
        x = x + 1;
        loop++;
    }
    printf("\nQuantidade de loops foi %i", loop);

    printf("\nLoop for!");
    for (int  i = 0; i <= 100; i++)
    {
        printf("\nO numero agora eh %i", i);
        loopsfor++;
    }
    printf("\nQuantidade de loops for foi %i", loopsfor);
}