/* 1-Escreva uma função que receba por parâmetro dois números e retorne o maior deles. */

#include <stdio.h>

int retorna_maior_valor(int a, int b){
    if(a > b){
        return a;
    }else{
        if(b > a){
            return b;
        }else{
            return 0;
        }
    }
}

int main(){

    int x, y;

    printf("Digite um valor qualquer: ");
    scanf("%d", &x);
    printf("Digite outro valor qualquer: ");
    scanf("%d", &y);

    retorna_maior_valor(x, y);

    if(retorna_maior_valor(x, y) == 0){
        printf("Os valores digitados são iguais.\n");
    }else{
        printf("O maior valor digitado foi %d.\n", retorna_maior_valor(x, y));
    }

    return 0;
}
